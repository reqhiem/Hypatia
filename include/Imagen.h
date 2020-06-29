#ifndef IMAGEN_H
#define IMAGEN_H
#include<string>
using namespace std;

class Imagen
{
    private:
        string titulo;
        string tipo;
        string url;
        string autor;
        int fecha;
    public:
        string getTitulo();
        string getTipo();
        string getUrl();
        string getAutor();
        int getFecha();
        void setTitulo(string titulo);
        void setTipo(string tipo);
        void setUrl(string url);
        void setAutor(string autor);
        void setFecha(int fecha);
        void IngresarDatos();
        void MostrarDatos();
        void EliminarDatos();
        Imagen();
        Imagen(string titulo, string tipo, string url, string autor, int fecha);
        ~Imagen();

};

#endif // IMAGEN_H
