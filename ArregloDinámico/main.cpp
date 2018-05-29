#include <iostream>
#include "IntegerArray.h"
using namespace std;

int main() {
    int b[]={1,2};
    IntegerArray a(b,2);
    a.Insertar(9);
    a.Insertar(10);
    a.Insertar(23);
    cout<<a.MayorPrim();
}
