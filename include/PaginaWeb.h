#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include<string>
using namespace std;

class PaginaWeb{
    private:
        string titulo;
        string url;
        string autor;
        int year;
        string lugar;
        string pagina;
    public:
        PaginaWeb();
        PaginaWeb(string titulo, string url, string autor, int year, string lugar,string pagina);
        ~PaginaWeb();
        string getTitulo();
        string getUrl();
        string getAutor();
        int getYear();
        string getLugar();
        string getPagina();
        void setTitulo( string titulo);
        void setUrl( string url);
        void setAutor( string autor);
        void setYear( int year);
        void setLugar( string lugar);
        void setPagina( string pagina);
        void IngresarDatos();
        void MostrarDatos();
        void EliminarDatos();
};

#endif // PAGINAWEB_H
