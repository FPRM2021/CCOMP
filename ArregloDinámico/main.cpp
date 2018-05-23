#include <iostream>
#include "IntegerArray.h"
using namespace std;

int main() {
    IntegerArray a(2);
    a.data[0]=1;
    a.data[1]=2;
    a.Insertar(3);
    a.Insertar(4);
    a.Eliminar(2);
    a.Vaciar();
    a.ImpData();
}
