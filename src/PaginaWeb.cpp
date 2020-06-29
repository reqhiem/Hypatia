#include "PaginaWeb.h"
#include<iostream>
#include<string>
using namespace std;
PaginaWeb::PaginaWeb(){
    string titulo="";
    string url="";
    string autor="";
    int year=0;
    string lugar="";
    string pagina="";
}

PaginaWeb::PaginaWeb(string titulo, string url, string autor, int year, string lugar, string pagina){
    this -> titulo = titulo;
    this -> url = url;
    this -> autor = autor;
    this -> year = year;
    this -> lugar = lugar;
    this -> pagina = pagina;
}
PaginaWeb::~PaginaWeb(){

}

string PaginaWeb::getTitulo(){
    return titulo;
}

string PaginaWeb::getUrl(){
    return url;
}

string PaginaWeb::getAutor(){
    return autor;
}
int PaginaWeb::getYear(){
    return year;
}
string PaginaWeb::getLugar(){
    return lugar;
}
string PaginaWeb::getPagina(){
    return pagina;
}
void PaginaWeb::setTitulo( string new_titulo){
    this -> titulo = new_titulo;
}
void PaginaWeb::setUrl( string new_url){
    this -> url = new_url;
}
void PaginaWeb::setAutor( string new_autor){
    this -> autor = new_autor;
}
void PaginaWeb::setYear( int new_year){
    this -> year = new_year;
}
void PaginaWeb::setLugar( string new_lugar){
    this -> lugar = new_lugar;
}
void PaginaWeb::setPagina( string new_pagina){
    this -> pagina = new_pagina;
}
void PaginaWeb:: IngresarDatos(){
    cout<<"Ingrese Titulo";cin>>titulo;
    cout<<"Ingrese URL";cin>>url;
    cout<<"Ingrese nombre del Autor";cin>>autor;
    cout<<"Ingrese Año de publicacion";cin>>year;
    cout<<"Ingrese Lugar de publicacion";cin>>lugar;
    cout<<"Ingrese Pagina Web";cin>>pagina;
}
void PaginaWeb:: MostrarDatos(){
    cout<<autor<<"("<<year<<")."<<titulo<<"."<<lugar<<":"<<pagina<<"."<<url;
}
void PaginaWeb::EliminarDatos(){

}
