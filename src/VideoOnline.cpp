#include "VideoOnline.h"
#include<iostream>
#include<string>

using namespace std;

VideoOnline::VideoOnline(){
    string autor = "";
    string usuario = "";
    string publicacion="";
    string titulo="";
    string url="";
}

VideoOnline :: VideoOnline(string autor, string usuario, string publicacion, string titulo, string url){
    this -> autor=autor;
    this -> usuario=usuario;
    this -> publicacion=publicacion;
    this -> titulo=titulo;
    this -> url=url;
}

string VideoOnline :: getAutor(){
    return autor;
}

string VideoOnline :: getUsuario(){
    return usuario;
}

string VideoOnline :: getPublicacion(){
    return publicacion;
}

string VideoOnline :: getTitulo(){
    return titulo;
}

string VideoOnline :: getUrl(){
    return url;
}

void VideoOnline :: setAutor(string new_autor){
    this -> autor = new_autor;
}

void VideoOnline :: setUsuario(string new_usuario){
    this -> usuario = new_usuario;
}

void VideoOnline :: setPublicacion(string new_publicacion){
    this -> publicacion = new_publicacion;
}

void VideoOnline :: setTitulo(string new_titulo){
    this -> titulo = new_titulo;
}

void VideoOnline :: setUrl(string new_url){
    this -> url = new_url;
}

void VideoOnline :: IngresarDatos(){
    cout<<"Ingrese nombre del Autor: ";cin>>autor;
    cout<<"Ingrese usuario: ";cin>>usuario;
    cout<<"Ingrese la fecha de publicacion: ";cin>>publicacion;
    cout<<"Ingrese el titulo: ";cin>>titulo;
    cout<<"Ingrese el URL :";cin>>url;
}
void VideoOnline :: MostrarDatos(){
    cout<<autor<<".["<<usuario<<"].("<<publicacion<<")."<<titulo<<"[Archivo de video].Recuperado de"<<url;
}
void VideoOnline :: EliminarDatos(){
}
VideoOnline::~VideoOnline(){

}
