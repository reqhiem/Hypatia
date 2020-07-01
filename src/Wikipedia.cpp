#include "Wikipedia.h"

Wikipedia::Wikipedia()
{
    nombre=" ";
    fecha_recuperado=" ";
    url=" ";
}

Wikipedia::~Wikipedia()
{
    //dtor
}

void Wikipedia::EliminarDatos(){}
void Wikipedia::IngresarDatos()
{
  string mes;
  cout<<"Ingrese nombre del articulo: "<<endl;
  getline(cin,nombre);
  cout<<"Ingrese fecha "<<endl;
  cout<<"Dia: "<<endl;
  cin>>fecha_recuperado;
  fecha_recuperado+= " de ";
  cout<<"Mes :" <<endl;
  cin>>mes;
  fecha_recuperado+=mes;
  cout<<"Año: " <<endl;
  cin>>mes;
  fecha_recuperado+=" de ";
  fecha_recuperado+=mes;
  cout<<"Ingrese URL: "<< endl;
  cin>>url;
}
void Wikipedia::ImprimirDatos(){
    cout<<nombre<<".(s.f.). En Wikipedia. Recuperado el "<<fecha_recuperado<<" de "<<url<<endl;

}
