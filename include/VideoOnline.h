#ifndef VIDEOONLINE_H
#define VIDEOONLINE_H
#include<string>
using namespace std;

class VideoOnline
{
    private:
        string autor;//dni xd
        string usuario;//alias xd
        string publicacion;
        string titulo;
        string url;
    public:
        VideoOnline();
        VideoOnline(string autor, string usuario, string publicacion, string titulo, string url);
        string getAutor();
        string getUsuario();
        string getPublicacion();
        string getTitulo();
        string getUrl();
        void setAutor(string autor);
        void setUsuario(string usuario);
        void setPublicacion(string publicacion);
        void setTitulo(string titulo);
        void setUrl(string url);
        void IngresarDatos();
        void MostrarDatos();
        void EliminarDatos();
        ~VideoOnline();
};

#endif // VIDEOONLINE_H
