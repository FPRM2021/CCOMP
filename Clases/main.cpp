#include <iostream>
#include "curso.h"

using namespace std;

int main()
{
    curso mat("Matematica II",16);
    curso mat1("CCOMPI",18);
    curso m2("Antropologia",14);
    curso a[]={mat,mat1,m2};
    cout<<mat.obtenerInfo()<<endl;

    return 0;
}
