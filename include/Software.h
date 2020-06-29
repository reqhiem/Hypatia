#ifndef SOFTWARE_H
#define SOFTWARE_H

#include<string>

using namespace std;

class Software{
    private:
        string autor;
        int year;
        string titulo;
        string version; // ejm: version 1.15.2 double version si es version 1.2
        string tipo; //aplicacion movil por ejemplo
        string url;

    public:
        string getAutor();
        int getYear();
        string getTitulo();
        string getVersion();
        string getTipo();
        string getUrl();
        void setAutor(string autor);
        void setYear(int year);
        void setTitulo(string titulo);
        void setVersion(string version);
        void setTipo(string tipo);
        void setUrl(string url);
        void ingresarDatos();
        void mostrarDatos();
        void eliminarDatos();
        Software();
        Software(string autor, int year, string titulo, string version, string tipo, string url);
        ~Software();
};

#endif // SOFTWARE_H
