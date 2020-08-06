#include <ctime>
#include <chrono>
#include "Date.h"

Date::Date(){}
Date::Date(int _anio, int _mes, int _dia) : anio{_anio}, mes{_mes}, dia{_dia}{};

Date::Date(std::string str){
    int _anio, _mes, _dia;
    std::string sanio, smes, sdia;
    sanio += str[6]; sanio += str[7];
    smes += str[3]; smes += str[4];
    sdia += str[0]; sdia += str[1];

    _anio = stoi(sanio); _mes = stoi(smes); _dia = stoi(sdia);

    anio = _anio;
    mes = _mes;
    dia = _dia;

}

/*Destructor*/
Date::~Date(){}

/*Setter and getters*/
void Date::setAnio(const int _anio) {anio = _anio;}
void Date::setMes(const int _mes) {mes = _mes;}
void Date::setDia(const int _dia) {dia = _dia;}

int Date::getAnio() {return anio;}
int Date::getMes() {return mes;}
int Date::getDia() {return dia;}


/*set_current_date*/
void Date::set_date_now(){
    auto currTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    tm *timeStruct = std::localtime(& currTime);

    dia = timeStruct->tm_mday;
    mes = timeStruct->tm_mon+1;
    anio = timeStruct->tm_year + 1900;
}

void Date::print_date()
{
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}
