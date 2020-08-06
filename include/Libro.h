#ifndef LIBRO_H
#define LIBRO_H

#include "Date.h"
#include "Documento.h"
#include <string>
class Libro : public Documento
{
    public:
        Libro();
        Libro(std::string, Date, std::string, std::string, std::string);
        virtual ~Libro();

        /*getters*/
        std::string getLugar_pub() const;
        std::string getEditorial() const;

        /*setters*/
        void setLugar_pub(std::string _lugar_pub);
        void setEditorial(std::string _editorial);

    protected:

    private:
        std::string lugar_pub;
        std::string editorial;
};

#endif // LIBRO_H
