#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H
#include<string>

using namespace std;

class ArticuloRevista
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
        ArticuloRevista();
        ArticuloRevista(string autor, int fecha, string titulo, string nombre, string volumen, int numero, int paginas);
        ~ArticuloRevista();
        string getAutor();
        int getFecha();
        string getTitulo();
        string getNombre();
        string getVolumen();
        int getNumero();
        int getPaginas();
        void setAutor(string autor);
        void setFecha(int fecha);
        void setTitulo(string titulo);
        void setNombre(string nombre);
        void setVolumen(string volumen);
        void setNumero(int numero);
        void setPaginas(int paginas);
        void IngresarDatos();
        void MostrarDatos();
        void EliminarDatos();
};

#endif // ARTICULOREVISTA_H
