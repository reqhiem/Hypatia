#ifndef REVISTA_H
#define REVISTA_H

using namespace std;

class Revista
{
    private:
        string autor;
        int fecha;
        string titulo;
        string nombre;
        string volumen;
        int numero;
        int paginas;
    public:
        Revista();
        Revista(string autor, int fecha, string titulo, string nombre, string volumen, int numero, int paginas);
        ~Revista();
        string getAutor();
        int getFecha();
        string getTitulo();
        string getNombre();
        string getVolumen();
        int getNumero();
        int getPaginas();
        void setAutor();
        void setFecha();
        void setTitulo();
        void setNombre();
        void setVolumen();
        void setNumero();
        void setPaginas();
        void IngresarDatos();
        void MostrarDatos();
        void EliminarDatos();
};

#endif // REVISTA_H
