/*This is the main file of Hypatia project,
*constains the main window
*/

#include <gtkmm.h>
#include <iostream>

Gtk::Window* pDialog = nullptr;

int main(int argc, char **argv){

    auto app = Gtk::Application::create(argc, argv, "org.hypatia.com");

    //Load the GtkBuilder file and instantiate its widgets:
    auto refBuilder = Gtk::Builder::create();

    try{
        refBuilder->add_from_file("hypatia.glade");
    }
    catch(const Glib::FileError& ex){
        std::cerr << "FileError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Glib::MarkupError& ex){
        std::cerr << "MarkupError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Gtk::BuilderError& ex){
        std::cerr << "BuilderError: " << ex.what() << std::endl;
        return 1;
    }

    //Get the GtkBuilder-instantiated Dialog:
    refBuilder->get_widget("mwindow", pDialog);
    if(pDialog){

        app->run(*pDialog);
    }

    delete pDialog;

    return 0;
}
