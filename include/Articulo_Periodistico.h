#ifndef ARTICULO_PERIODISTICO_H
#define ARTICULO_PERIODISTICO_H
#include <iostream>
using namespace std;

class Articulo_Periodistico
{
    public:
        Articulo_Periodistico();
        virtual ~Articulo_Periodistico();
        void IngresarDatos();
        void ImprimirDatos();
        void EliminarDatos();

    private:
        string Titulo;
        string Nombre_Periodico;
        string URL;
        string Autor;
        string fecha_publicacion;
        string paginas;
};

#endif // ARTICULO_PERIODISTICO_H
