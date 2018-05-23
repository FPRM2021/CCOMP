#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H
#include <iostream>
using namespace std;

class IntegerArray {
    public:
        int *data;
        int size;
        IntegerArray(int);
        IntegerArray(IntegerArray &);
        ~IntegerArray();
        void ImpData();
        void Insertar(int);
        void Insertar(int, int);
        void Eliminar(int);
        void Vaciar();
};
#endif // INTEGERARRAY_H
