#include "Imagen.h"
#include<string>
#include<iostream>
using namespace std;
Imagen::Imagen(){
    string titulo = "";
    string tipo = "";
    string url = "";
    string autor = "";
    int fecha=0;
}

Imagen :: Imagen(string titulo, string tipo, string url, string autor, int fecha){
    this -> titulo =titulo;
    this -> tipo = tipo;
    this -> url = url;
    this -> autor = autor;
    this -> fecha = fecha;
}
Imagen::~Imagen(){
}

string Imagen :: getTitulo(){
    return titulo;
}

string Imagen :: getTipo(){
    return tipo;
}

string Imagen :: getUrl(){
    return url;
}

string Imagen :: getAutor(){
    return autor;
}

int Imagen :: getFecha(){
    return fecha;
}

void Imagen :: setTitulo(string new_titulo){
    this -> titulo = new_titulo;
}

void Imagen :: setTipo(string new_tipo){
    this -> tipo = new_tipo;
}

void Imagen :: setUrl(string new_url){
    this -> url = new_url;
}

void Imagen :: setAutor(string new_autor){
    this -> autor = new_autor;
}

void Imagen :: setFecha(int new_fecha){
    this -> fecha = new_fecha;
}

void Imagen :: IngresarDatos(){
    cout<<"Ingrese Autor: ";
    cin>>autor;
    cout<<"Ingrese Año: ";
    cin>>fecha;
    cout<<"Ingrese Titulo: ";
    cin>>titulo;
    cout<<"Ingrese tipo de la imagen";
    cin>>tipo;
    cout<<"Ingrese URL: ";
    cin>>url;
}

void Imagen :: MostrarDatos(){
    cout<<autor<<".("<<fecha<<")."<<titulo<<"["<<tipo<<"].Recuperado de "<<url;
}

void Imagen :: EliminarDatos(){
}
