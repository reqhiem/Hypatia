#include "Documento.h"
#include "Libro.h"
#include "Articulo.h"

Documento::Documento()
{}

Documento::~Documento()
{}

Documento::Documento (std::string _titulo, Date _fecha_pub, std::string _autores)
    : titulo {_titulo},
    fecha_pub {_fecha_pub},
    autores {_autores}
    {}
Documento::~Documento();

/* Getters and setters*/
std::string Documento::getTitulo() const{return titulo;}
std::string Documento::getAutores() const {return autores;}
Date Documento::getFecha_pub () const {return fecha_pub;}

void Documento::setTitulo(std::string _titulo) {titulo = _titulo;}
void Documento::setAutores(std::string _autores){autores = _autores;}
void Documento::setFecha_pub(Date _fecha_pub){fecha_pub = _fecha_pub;}


/*Implementation of factory method*/
Documento* Documento::make_document(std::string tipo,
                                    std::string titulo,
                                    Date fecha,
                                    std::string autores,
                                    std::string lugar_pub,
                                    std::string editorial)
{
    if(tipo == "Libro")
        return new Libro(titulo, fecha, autores, lugar_pub, editorial);
    else if (tipo == "Articulo")
        return new Articulo;
    return nullptr;
}
