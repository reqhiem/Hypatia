#include "Form_window.h"
#include <iostream>

#include "Libro.h"

Form_window::Form_window(std::vector<Documento> *docs)
    : m_ButtonBox(Gtk::ORIENTATION_HORIZONTAL),
      m_Button_save("Agregar"),
      m_Button_cancel("Cancelar"),
      vdocs{docs}
{
    //Set the widgets properties
    //Fill the combo:
    m_Combo.append("Seleccionar");
    m_Combo.append("Libro");
    m_Combo.append("Otro");
    m_Combo.set_active(0);

    tipo_label.set_text("Tipo de fuente: ");
    title_label.set_text("Titulo: ");
    fecha_label.set_text("Fecha de publicacion: (DD/MM/AA) ");
    autores_label.set_text("Autores: (Apellido, A.)");
    lugar_pub_label.set_text("Lugar de publicaion: (Ciudad: Pais)");
    editorial_label.set_text("Editorial: ");

    //Add to the grid
    form_grid.set_row_homogeneous(true);
    form_grid.set_row_spacing(5);
    form_grid.set_column_spacing(5);

    form_grid.attach(tipo_label, 0, 0);
    form_grid.attach(m_Combo, 1, 0);

    form_grid.attach(title_label, 0, 1);
    form_grid.attach(title_entry, 1, 1);

    form_grid.attach(fecha_label, 0, 2);
    form_grid.attach(fecha_entry, 1, 2);

    form_grid.attach(autores_label, 0, 3);
    form_grid.attach(autores_entry, 1, 3);

    form_grid.attach(lugar_pub_label, 0, 4);
    form_grid.attach(lugar_pub_entry, 1, 4);

    form_grid.attach(editorial_label, 0, 5);
    form_grid.attach(editorial_entry, 1, 5);

    form_grid.attach_next_to(m_ButtonBox,editorial_label,Gtk::POS_BOTTOM, 2, 1);

    //Add the Grid o the Windows
    add(form_grid);
    set_title("Agregar");

    /**
    Connect to the signal handlers*/
    m_Combo.signal_changed().connect(sigc::mem_fun(*this,
              &Form_window::on_combo_changed));

    m_ButtonBox.pack_start(m_Button_save);
    m_Button_save.signal_clicked().connect(sigc::mem_fun(*this,
              &Form_window::on_button_save_clicked) );

    m_ButtonBox.pack_start(m_Button_cancel);
    m_Button_cancel.signal_clicked().connect(sigc::mem_fun(*this,
              &Form_window::on_button_cancel_clicked) );

    show_all_children();
}

Form_window::~Form_window()
{
    //dtor
}

void Form_window::on_button_save_clicked()
{
    /*Some code*/
    std::cout << "Save was clicked" << std::endl;

    /*recuperamos los datos del formulario*/
    std::string tipo = m_Combo.get_active_text();
    std::string titulo = title_entry.get_text();

    std::string fecha_str = fecha_entry.get_text();
    Date fecha(fecha_str);

    std::string autores = autores_entry.get_text();
    std::string lugar_pub = lugar_pub_entry.get_text();
    std::string editorial = editorial_entry.get_text();

    /*Primero creo un Documento = new Tipo*/
   /*Opciones para Libro*/
    Documento* doc = Documento::make_document(tipo,titulo,fecha, autores, lugar_pub, editorial);
    (*vdocs).push_back(*doc);
    std::cout << "Was created succesfully" << std::endl;

    hide();
    /*Luego creo un Bibliographi*/
}

void Form_window::on_button_cancel_clicked()
{
    /*Some code*/
    std::cout << "Cancel was clicked" << std::endl;
    hide();
}

void Form_window::on_combo_changed()
{
    Glib::ustring text = m_Combo.get_active_text();
    if(!(text.empty()))
        std::cout << "Combo changed: " << text << std::endl;
}

