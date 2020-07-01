#ifndef INFORME_H
#define INFORME_H
#include <iostream>
using namespace std;

class Informe
{
    public:
        Informe();
        virtual ~Informe();
        void IngresarDatos();
        void ImprimirDatos();
        void EliminarDatos();

    protected:

    private:
        string titulo;
        int numero_publicacion;
        string url;
        string nombre_organizacion;
        int anio;
};

#endif // INFORME_H
