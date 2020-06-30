#include "Revista_cientifica.h"
#include <iostream>
using namespace std;
Revista_cientifica::Revista_cientifica()
{
    Tit_ar="";
    Tit_rev="";
    Autor="";
    URL="";
    PagFinal=0;
    PagInicial=0;
    anio=0;
}
Revista_cientifica::~Revista_cientifica()
{
    //dtor
}
void Revista_cientifica::EliminarDatos()
{
//aun no se a que se refiere
}
void Revista_cientifica::ImprimirDatos()
{
  cout<<Autor<<"("<<anio<<")."<<Tit_ar<<"."<<Tit_rev<<","<<volumen<<"("<<num<<"),"<<PagInicial<<"-"<<PagFinal<<endl;

}
void Revista_cientifica::IngresarDatos()
{
  string name;
  cout<<"Ingrese titulo del articulo: "<<endl;
  getline(cin,Tit_ar);
  cout<<"Ingrese titulo de la revista: "<<endl;
  getline(cin,Tit_rev);
  cout<<"Ingrese año: "<<endl;
  cin>>anio;
  cout<<"Ingrese Apellido del autor"<<endl;
  cin>>Autor;
  cout<<"Ingrese nombre del Autor"<<endl;
  cin>>name;
  Autor+=",";
  Autor+=name[0];
  cout<<"Ingrese volumen de la revista en que se publico el articulo: "<<endl;
  cin>>volumen;
  cout<<"Ingrese numero de la revista: "<<endl;
  cin>>num;
  cout<<"Ingrese pagina inicial: "<<endl;
  cin>>PagInicial;
  cout<<"Ingrese pagina final:"<<endl;
  cin>>PagFinal;

}
