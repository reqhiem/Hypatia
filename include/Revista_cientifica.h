#ifndef REVISTA_CIENTIFICA_H
#define REVISTA_CIENTIFICA_H
#include <iostream>
using namespace std;
class Revista_cientifica
{
    string Tit_ar;
    string Tit_rev;
    string Autor;
    string URL;
    int PagInicial;
    int PagFinal;
    int anio;
    int num;
    int volumen;
    public:
        Revista_cientifica();
        virtual ~Revista_cientifica();
        void IngresarDatos();
        void ImprimirDatos();
        void EliminarDatos();
};

#endif // REVISTA_CIENTIFICA_H
