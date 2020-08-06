/*This is the main file of Hypatia project,
*constains the main window
*/

#include <gtkmm.h>
#include <iostream>
#include <memory>

#include "Libro.h"
#include "MainWindow.h"
#include "Form_window.h"

//Gtk::Window* pDialog = nullptr;

int main(int argc, char **argv){

    Date date(2020,05,26);
    std::unique_ptr<Documento> libro = std::make_unique<Libro>("La ciudad de los perros", date, "Vargas, M.", "Lima", "Casa Verde");

    auto app = Gtk::Application::create(argc, argv, "org.hypatia.com");

    auto window = std::make_unique<MainWindow>(app);
    //auto window = std::make_unique<Form_window>();
    app->run(*window);

    //auto application = MainApplication::create();
    //const int status = application->run(argc, argv);

    //return status;
    return 0;
}
