#include "BibliographicSource.h"

BibliographicSource::BibliographicSource()
{}

BibliographicSource::BibliographicSource(Documento _doc, Date _fecha)
     : es_favorito {false},
     documento {_doc},
     fecha {_fecha}
{}

BibliographicSource::~BibliographicSource()
{}

BibliographicSource::BibliographicSource(const BibliographicSource& other)
{
    es_favorito = other.es_favorito;
    documento = other.documento;
    fecha = other.fecha;
}

/*Setters and getters*/
bool BibliographicSource::getEs_favorito()const {return es_favorito;}
Documento BibliographicSource::getDocumento() const {return documento;}
Date BibliographicSource::getFecha() const {return fecha;}

void BibliographicSource::setEs_favorito(bool _es_favorito)
{es_favorito = _es_favorito;}
void BibliographicSource::setDocumento(Documento _documento)
{documento = _documento;}
void BibliographicSource::setFecha(Date _fecha)
{fecha = _fecha;}
