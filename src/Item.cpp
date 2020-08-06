#include "Item.h"

Item::Item(BibliographicSource biblio_source)

{
    //Set some properties of Grid
    set_row_spacing(13);
    set_row_homogeneous(true);
    set_column_homogeneous(true);

    //Set values to child widgets
    Documento doc = biblio_source.getDocumento();
    std::string titulo = doc.getTitulo();
    std::string autores = doc.getAutores();

    title_label.set_text(titulo);
    author_label.set_text(autores);
    date_label.set_text("30 Julio");

    //Add the child widgets values
    add(select);
    add(favourite);
    add(icon_type);
    add(title_label);
    add(author_label);
    add(date_label);

    show_all_children();
}

Item::~Item()
{
    //dtor
}
