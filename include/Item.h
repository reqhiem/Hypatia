#ifndef ITEM_H
#define ITEM_H

#include <gtkmm.h>
#include "BibliographicSource.h"

class Item : public Gtk::Grid
{
    public:
        Item(BibliographicSource biblio_source);
        virtual ~Item();

    protected:

        /*Child widgets*/
        Gtk::CheckButton select;
        Gtk::ToggleButton favourite;
        Gtk::Image icon_type;
        Gtk::Label title_label;
        Gtk::Label author_label;
        Gtk::Label date_label;

        /*Data for the Grid*/
        BibliographicSource biblio_source;

    private:

};

#endif // ITEM_H
