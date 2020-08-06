
#include <iostream>
#include <fstream>
#include <gtkmm.h>

#include "MainWindow.h"
#include "Form_window.h"

MainWindow::MainWindow(const Glib::RefPtr<Gtk::Application>& app)
    : ui{Gtk::Builder::create_from_file("src/hypatia.glade")}

{

    if(ui){
        ui->get_widget<Gtk::Box>("windowBox", window_Box);
        ui->get_widget<Gtk::Box>("item_container", item_container);
        ui->get_widget<Gtk::Box>("item", item);
        ui->get_widget<Gtk::Box>("MainMenuBox", menu_bar_Box);
        ui->get_widget<Gtk::Button>("add_button", addButton);
    }

    /*Define the signals*/
    addButton->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_add_button_presed));

    /*This is for the app menu*/
    //Define the actions:
    m_refActionGroup = Gio::SimpleActionGroup::create();

    m_refActionGroup->add_action("new",
        sigc::mem_fun(*this, &MainWindow::on_action_file_new) );
    m_refActionGroup->add_action("quit",
        sigc::mem_fun(*this, &MainWindow::on_action_file_quit) );

    m_refActionGroup->add_action("about",
        sigc::mem_fun(*this, &MainWindow::on_action_others) );

    insert_action_group("example", m_refActionGroup);

    //Define how the actions are presented in the menus and toolbars:
    m_refBuilder = Gtk::Builder::create();

    //Layout the actions in a menubar and toolbar:
  const char* ui_info =
    "<interface>"
    "  <menu id='menubar'>"
    "    <submenu>"
    "      <attribute name='label' translatable='yes'>_Archivo</attribute>"
    "      <section>"
    "        <item>"
    "          <attribute name='label' translatable='yes'>_Nuevo</attribute>"
    "          <attribute name='action'>example.new</attribute>"
    "          <attribute name='accel'>&lt;Primary&gt;n</attribute>"
    "        </item>"
    "      </section>"
    "      <section>"
    "        <item>"
    "          <attribute name='label' translatable='yes'>_Salir</attribute>"
    "          <attribute name='action'>example.quit</attribute>"
    "          <attribute name='accel'>&lt;Primary&gt;q</attribute>"
    "        </item>"
    "      </section>"
    "    </submenu>"
    "    <submenu>"
    "      <attribute name='label' translatable='yes'>_Ayuda</attribute>"
    "      <item>"
    "        <attribute name='label' translatable='yes'>_Acerca de</attribute>"
    "        <attribute name='action'>example.about</attribute>"
    "        <attribute name='accel'>&lt;Primary&gt;x</attribute>"
    "      </item>"
    "    </submenu>"
    "  </menu>"
    "</interface>";

    app->set_accel_for_action("example.new", "<Primary>n");
    app->set_accel_for_action("example.quit", "<Primary>q");
    app->set_accel_for_action("example.about", "<Primary>x");

    try
    {
        m_refBuilder->add_from_string(ui_info);
        //m_refBuilder->add_from_resource("/toolbar/toolbar.glade");
    }
    catch(const Glib::Error& ex)
    {
        std::cerr << "Building menus and toolbar failed: " <<  ex.what();
    }

    //Get the menubar:
    auto object = m_refBuilder->get_object("menubar");
    auto gmenu = Glib::RefPtr<Gio::Menu>::cast_dynamic(object);
    if (!gmenu)
        g_warning("GMenu not found");
    else
    {
        auto pMenuBar = Gtk::make_managed<Gtk::MenuBar>(gmenu);

        //Add the MenuBar to the window:
        menu_bar_Box->pack_start(*pMenuBar, Gtk::PACK_SHRINK);
    }

    add(*window_Box);

    //Creating an Item
    //BibliographicSource bblio;
    //Item* item2 = new Item(bblio);
    //item_container->pack_start(*item,Gtk::PACK_EXPAND_PADDING);
    //item_container->add(*item2);
    show_all();
}

MainWindow::~MainWindow()
{
    delete window_Box;
    delete item_container;
    delete item;
}

void MainWindow::on_action_file_quit()
{
    hide(); //Closes the main window to stop the app->run().
}

void MainWindow::on_action_file_new()
{
    std::cout << "A File|New menu item was selected." << std::endl;
    Gtk::FileChooserDialog dialog("Por favor selecciona un archivo",
                                    Gtk::FILE_CHOOSER_ACTION_OPEN);
    dialog.set_transient_for(*this);

    //Add response buttons the the dialog:
    dialog.add_button("_Cancelar", Gtk::RESPONSE_CANCEL);
    dialog.add_button("_Abrir", Gtk::RESPONSE_OK);

    //Add filters, so that only certain file types can be selected:

    /**/
    auto filter_any = Gtk::FileFilter::create();
    filter_any->set_name("Any files");
    filter_any->add_pattern("*");
    dialog.add_filter(filter_any);

    auto filter_text = Gtk::FileFilter::create();
    filter_text->set_name("Text files");
    filter_text->add_mime_type("text/plain");
    dialog.add_filter(filter_text);

    auto filter_bib = Gtk::FileFilter::create();
    filter_bib->set_name("BibText files");
    filter_bib->add_mime_type("text/x-bibtext");
    dialog.add_filter(filter_bib);


    //Show the dialog and wait for a user response:
    int result = dialog.run();

    //Handle the response:
    switch(result)
    {
        case(Gtk::RESPONSE_OK):
        {
            std::cout << "Open clicked." << std::endl;

            //Notice that this is a std::string, not a Glib::ustring.
            std::string filename = dialog.get_filename();
            std::cout << "File selected: " <<  filename << std::endl;

            std::ifstream archivo(filename);
            char linea[240];
            std::string content;

            if(archivo.fail())
                std::cerr << "Error al abrir el archivp: " << std::endl;
            else{
                while(!archivo.eof()){
                    archivo.getline(linea, sizeof(linea));
                    std::cout << linea << std::endl;
                    content += linea;
                    content += "\n";
                }
            }
            std::cout << content << std::endl;
            archivo.close();
            break;
        }
        case(Gtk::RESPONSE_CANCEL):
        {
            std::cout << "Cancel clicked." << std::endl;
            break;
        }
        default:
        {
            std::cout << "Unexpected button clicked." << std::endl;
            break;
        }
    }
}

void MainWindow::on_action_others()
{
    std::cout << "A menu item was selected." << std::endl;
}

void MainWindow::on_add_button_presed()
{
    /*Some code*/
    std::cout << "+ was clicked" << std::endl;
    std::cout << docs.size() << std::endl;

    auto app_form = Gtk::Application::create("org.hypatia.com.form");

    Form_window* form = new Form_window(&docs);
    app_form->run(*form);

    Date current;
    current.set_date_now();

    current.print_date();
    docs.back().print_doc();

    BibliographicSource* bblio = new BibliographicSource(docs.back(), current);
    Item* itemAux = new Item(*bblio);
    item_container->pack_start(*itemAux);

    show_all();

    delete form;
}
