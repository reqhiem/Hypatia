#ifndef DATE_OWN_H
#define DATE_OWN_H

#include <iostream>
#include <string>

class Date
{
    public:
        Date();
        Date(int _anio, int _mes = 0, int _dia = 0);
        Date(std::string str);
        virtual ~Date();

        void setAnio(const int _anio);
        void setMes(const int _mes);
        void setDia(const int _dia);

        int getAnio();
        int getMes();
        int getDia();

        void set_date_now();
        void print_date();

    protected:
        int anio, mes, dia;
    private:

};

#endif // DATE_OWN_H
