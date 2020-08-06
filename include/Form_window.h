#ifndef FORM_WINDOW_H
#define FORM_WINDOW_H

#include <gtkmm.h>
#include <memory>
#include <vector>
#include "Documento.h"
class Form_window : public Gtk::Window
{
    public:
        Form_window(std::vector<Documento> *docs);
        virtual ~Form_window();

        //Other methods

    protected:
        //Signal handlers:
        void on_button_save_clicked();
        void on_button_cancel_clicked();
        void on_combo_changed();


        //Child widgets
        Gtk::Label tipo_label, title_label, fecha_label, autores_label, lugar_pub_label, editorial_label;
        Gtk::Entry title_entry, fecha_entry, autores_entry, lugar_pub_entry, editorial_entry;

        Gtk::ComboBoxText m_Combo;


        Gtk::Grid form_grid;

        Gtk::ButtonBox m_ButtonBox;
        Gtk::Button m_Button_save, m_Button_cancel;
    private:
        std::vector<Documento> *vdocs;
};

#endif // FORM_WINDOW_H
