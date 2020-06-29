#include "Software.h"
#include<string>

#include<iostream>

using namespace std;

Software::Software(){
    autor = "";
    year = 0;
    titulo = "" ;
    version = "" ;
    tipo = "";
    url = "";
}
Software :: Software(string autor, int year, string titulo, string version, string tipo, string url){
    this -> autor = autor;
    this -> year = year;
    this -> titulo = titulo;
    this -> version = version;
    this -> tipo = tipo;
    this -> url = url;
}

string Software :: getAutor(){
    return autor;
}

int Software :: getYear(){
    return year;
}

string Software :: getTitulo(){
    return titulo;
}

string Software :: getVersion(){
    return version;
}
string Software :: getTipo(){
    return tipo;
}

string Software :: getUrl(){
    return url;
}
void Software :: setAutor(string new_autor){
    this -> autor = new_autor;
}
void Software :: setYear(int new_year){
    this -> year = new_year;
}

void Software :: setTitulo(string new_titulo){
    this -> titulo = new_titulo;
}

void Software :: setVersion(string new_version){
    this -> version = new_version;
}

void Software :: setTipo(string new_tipo){
    this -> tipo = new_tipo;
}

void Software :: setUrl(string new_url){
    this -> url = new_url;
}
void Software :: ingresarDatos(){
    cout<<"Ingrese el Autor: ";
    cin>>autor;
    cout<<"Ingrese Year: ";
    cin>>year;
    cout<<"Ingrese el Titulo: ";
    cin>>titulo;
    cout<<"Ingrese la Version: ";
    cin>>version;
    cout<<"Ingrese el Tipo: ";
    cin>>tipo;
    cout<<"Ingrese la URL: ";
    cin>>url;
}
void Software :: mostrarDatos(){
    cout<<autor<<".("<<year<<")."<<titulo<<"("<<version<<")["<<tipo<<"]."<<"Descargado de:"<<url<<endl;
}
void Software :: eliminarDatos(){
    autor="";
    year=0;
    titulo="";
    version="";
    tipo="";
    url="";
}
Software::~Software(){
}
