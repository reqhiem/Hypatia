#ifndef WIKIPEDIA_H
#define WIKIPEDIA_H
#include <iostream>
using namespace std;
class Wikipedia
{
    public:
        Wikipedia();
        virtual ~Wikipedia();
        void IngresarDatos();
        void ImprimirDatos();
        void EliminarDatos();
    protected:

    private:
        string nombre;
        string fecha_recuperado;
        string url;
};

#endif // WIKIPEDIA_H
