#include "Articulo_Periodistico.h"

Articulo_Periodistico::Articulo_Periodistico()
{
    Titulo="";
    Nombre_Periodico="";
    URL="";
    Autor="";
    fecha_publicacion="";
    paginas="";
}

Articulo_Periodistico::~Articulo_Periodistico()
{
    //dtor
}

void Articulo_Periodistico::EliminarDatos(){}
void Articulo_Periodistico::ImprimirDatos(){
cout<<Autor<<".("<<fecha_publicacion<<")."<<Titulo<<"."<<Nombre_Periodico<<",pp. "<<paginas<<endl;
}
void Articulo_Periodistico::IngresarDatos(){
 cout<<"Ingrese titulo: "<<endl;
 getline(cin,Titulo);
 cout<<"Ingrese nombre del periodico" <<endl;
 getline(cin,Nombre_Periodico);
cout<<"Ingrese Apellido del autor"<<endl;
  cin>>Autor;
  cout<<"Ingrese nombre del Autor"<<endl;
  string name,mes,pg;
  cin>>name;
  Autor+=",";
  Autor+=name[0];
  cout<<"Ingrese fecha "<<endl;
  cout<<"Dia: "<<endl;
  cin>>fecha_publicacion;
  fecha_publicacion+= " de ";
  cout<<"Mes :" <<endl;
  cin>>mes;
  fecha_publicacion+=mes;
  cout<<"Año: " <<endl;
  cin>>mes;
  fecha_publicacion+=" de ";
  fecha_publicacion+=mes;
  cout<<"Ingrese URL: "<< endl;
  cin>>URL;
  cout<<"Ingrese pagina inicio:"<<endl;
  cin>>paginas;
  paginas+= "-";
  cout<<"Ingrese pagina final: "<<endl;
  cin>>pg;
  paginas+=pg;
}
