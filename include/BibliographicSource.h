#ifndef BIBLIOGRAPHIC_SOURCE_H
#define BIBLIOGRAPHIC_SOURCE_H

#include "Documento.h"

class BibliographicSource
{
    public:
        BibliographicSource();
        BibliographicSource(Documento, Date);
        BibliographicSource(const BibliographicSource& other);
        virtual ~BibliographicSource();

        /*Setters*/
        bool getEs_favorito()const;
        Documento getDocumento() const;
        Date getFecha() const;

        /*Getters*/
        void setEs_favorito(bool _es_favorito);
        void setDocumento(Documento _documento);
        void setFecha(Date _fecha);
    protected:

    private:
        bool es_favorito;
        Documento documento;
        Date fecha;

};

#endif // BibliographicSource_H
