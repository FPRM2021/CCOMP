#include <iostream>
#include "Punto.h"
#include "ArrPunto.h"
#include "Autos.h"
using namespace std;

int main()
{
    Punto po[4]={{1.2,1.5}};
    Punto b(1,6);
    Punto c(5,9);
    Punto d(3,7);
    ArrPunto a(po,4);
    a.Insertar(b);
    a.Insertar(c);
    a.Insertar(d);
    a.Eliminar(2);
    a.ImpArr();
    cout<<endl;

    Dodge carro(140.57,"Charger",1969);
    Ford carro1(130.7,"Mustang 2015",2015);
    Autos *p = &carro;
    Autos *p1= &carro1;
    p->espec();
    p1->espec();
    return 0;
}
