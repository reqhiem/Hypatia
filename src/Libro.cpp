#include "Libro.h"

Libro::Libro()
{}

Libro::Libro (std::string _titulo, Date _fecha_pub, std::string _autores, std::string _lugar_pub, std::string _editorial)
    : Documento(_titulo, _fecha_pub, _autores),
    lugar_pub {_lugar_pub},
    editorial {_editorial}
    {}

Libro::~Libro()
{}

std::string Libro::getLugar_pub() const {return lugar_pub;}
std::string Libro::getEditorial() const {return editorial;}

void Libro::setLugar_pub(std::string _lugar_pub) {lugar_pub = _lugar_pub;}
void Libro::setEditorial(std::string _editorial) {editorial = _editorial;}
