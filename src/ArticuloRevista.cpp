#include "ArticuloRevista.h"
#include<string>
#include<iostream>

using namespace std;

ArticuloRevista::ArticuloRevista(){
    string autor = "";
    int fecha = 0;
    string titulo = "";
    string nombre = "";
    string volumen = "";
    int numero = 0;
    int paginas = 0;
}

ArticuloRevista::ArticuloRevista(string autor, int fecha, string titulo, string nombre, string volumen, int numero, int paginas){
    this -> autor = autor;
    this -> fecha = fecha;
    this -> titulo = titulo;
    this -> nombre = nombre;
    this -> volumen = volumen;
    this -> numero = numero;
    this -> paginas = paginas;
}

ArticuloRevista::~ArticuloRevista(){

}
string ArticuloRevista :: getAutor(){
    return autor;
}

int ArticuloRevista :: getFecha(){
    return fecha;
}

string ArticuloRevista :: getTitulo(){
    return titulo;
}

string ArticuloRevista :: getNombre(){
    return nombre;
}

string ArticuloRevista :: getVolumen(){
    return volumen;
}

int ArticuloRevista :: getNumero(){
    return numero;
}

int ArticuloRevista :: getPaginas(){
    return paginas;
}

void ArticuloRevista :: setAutor(string new_autor){
    this -> autor = new_autor;
}

void ArticuloRevista :: setFecha(int new_fecha){
    this -> fecha = new_fecha;
}

void ArticuloRevista :: setTitulo(string new_titulo){
    this -> titulo = new_titulo;
}

void ArticuloRevista :: setNombre(string new_nombre){
    this -> nombre = new_nombre;
}

void ArticuloRevista :: setVolumen(string new_volumen){
    this -> volumen = new_volumen;
}

void ArticuloRevista :: setNumero(int new_numero){
    this -> numero = new_numero;
}

void ArticuloRevista :: setPaginas(int new_paginas){
    this -> paginas = new_paginas;
}

void ArticuloRevista :: IngresarDatos(){
    cout<<"Ingresar autor";
    cin>>autor;
    cout<<"Ingresar fecha";
    cin>>fecha;
    cout<<"Ingresar titulo";
    cin>>titulo;
    cout<<"Ingresar nombre";
    cin>>nombre;
    cout<<"Ingresar Volumen";
    cin>>volumen;
    cout<<"Ingresar numero del Volumen";
    cin>>numero;
    cout<<"Ingresar pagina";
    cin>>paginas;
}

void ArticuloRevista :: MostrarDatos(){
    cout<<autor<<".("<<fecha<<")."<<titulo<<"."<<nombre<<"."<<volumen<<"("<<numero<<")"<<",p"<<paginas;
}

void ArticuloRevista :: EliminarDatos(){}
