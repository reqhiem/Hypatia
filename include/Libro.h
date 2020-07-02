#ifndef LIBRO_H
#define LIBRO_H

//Includes locales
#include <list>
#include <string>
using namespace std;
class Libro
{
    public:
        Libro();
        virtual ~Libro();

    protected:

    private:
        string titulo;
        list<string> autores;
        list<string> lugar;
        string editorial;
        //Date fech_pub;
        //Date fech_cons;
        string url;
        string doi;
        string pp;

};

#endif // LIBRO_H
