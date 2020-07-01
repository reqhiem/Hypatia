#include "Informe.h"

Informe::Informe()
{
    titulo="";
    anio=0;
    url="";
    nombre_organizacion="";
    numero_publicacion=0;
}

Informe::~Informe()
{
    //dtor
}
void Informe::ImprimirDatos(){
    cout<<nombre_organizacion<<". ("<<anio<<"). "<<titulo<<" ("<<numero_publicacion<<"). Recuperado de "<<url<<endl;
}

void Informe::IngresarDatos(){
  cout<<"Ingrese titulo: "<<endl;
  getline(cin,titulo);
  cout<<"Año: " <<endl;
  cin>>anio;
  cout<<"Nombre de la organicacion: "<<endl;
  getline(cin,nombre_organizacion);
  cout<<"Numero de la publicacion: "<<endl;
  cin>>numero_publicacion;
  cout<<"Ingrese URL: "<< endl;
  cin>>url;


}
void Informe::EliminarDatos(){}
