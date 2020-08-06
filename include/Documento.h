#ifndef DOCUMENTO_H
#define DOCUMENTO_H

#include "Date.h"

class Documento
{
    public:
        Documento();
        Documento (std::string _titulo, Date _fecha_pub, std::string _autores);
        virtual ~Documento();

        /*Factory method*/
        static Documento* make_document(std::string tipo,
                                        std::string titulo,
                                        Date fecha,
                                        std::string autores,
                                        std::string lugar_pub,
                                        std::string editorial);

        /* Getters and setters*/
        std::string getTitulo() const;
        std::string getAutores() const;
        Date getFecha_pub () const;

        void setTitulo(std::string _titulo);
        void setAutores(std::string _autores);
        void setFecha_pub(Date _fecha_pub);

        /*For testing*/
        void print_doc(){
            std::cout << titulo << " " << autores << " ";
            fecha_pub.print_date();

        }

    protected:
        std::string titulo;
        Date fecha_pub;
        std::string autores;

    private:
};

#endif // DOCUMENTO_H
