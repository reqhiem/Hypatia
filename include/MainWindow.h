#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtkmm.h>
#include <vector>

#include "Documento.h"
#include "Item.h"
#include "BibliographicSource.h"

class MainWindow : public Gtk::ApplicationWindow
{
    public:
        MainWindow(const Glib::RefPtr<Gtk::Application>& app);
        virtual ~MainWindow();

    protected:
        //signal hanlders
        void on_action_file_new();
        void on_action_file_quit();
        void on_action_others();
        //void on_action_toggle();

        void on_add_button_presed();

        //Child widgets:
        Gtk::Box* window_Box; //Main Box
        Gtk::Box* item_container;
        Gtk::Box* item;
        Gtk::Box* menu_bar_Box;
        //Gtk::Box* item2;

        Gtk::Button* addButton;


        /*To handle the actions*/
        Glib::RefPtr<Gtk::Builder> m_refBuilder;
        Glib::RefPtr<Gio::SimpleActionGroup> m_refActionGroup;
        //Glib::RefPtr<Gio::SimpleAction> m_refActionRain;


    private:
        Glib::RefPtr<Gtk::Builder> ui;

        /*Datos miembro*/
        std::vector<Documento> docs;
        std::vector<Item> items;
};

#endif // MAINWINDOW_H
