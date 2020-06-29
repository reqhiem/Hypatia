#include "Software.h"
#include "VideoOnline.h"
#include "PaginaWeb.h"
#include "Imagen.h"
#include "ArticuloRevista.h"
int main(){
    Software s1;
    s1.ingresarDatos();
    s1.mostrarDatos();
    s1.eliminarDatos();

    VideoOnline v1;
    v1.IngresarDatos();
    v1.MostrarDatos();
    v1.EliminarDatos();

    PaginaWeb p1;
    p1.IngresarDatos();
    p1.MostrarDatos();
    p1.EliminarDatos();

    Imagen i1;
    i1.IngresarDatos();
    i1.MostrarDatos();
    i1.EliminarDatos();

    ArticuloRevista r1;
    r1.IngresarDatos();
    r1.MostrarDatos();
    r1.EliminarDatos();
    return 0;
}
