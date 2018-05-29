#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H
#include <iostream>
using namespace std;

class IntegerArray {
    int *data;
    int tam;
    public:
        IntegerArray(int[], int);
        IntegerArray(IntegerArray &);
        ~IntegerArray();
        void ImpData();
        void Insertar(int);
        void Insertar(int, int);
        void Modificar(int, int);
        void Eliminar(int);
        void Vaciar();
        int Mayor();
        int Menor();
        int Suma();
        int Promedio();
        int MayorPrim();
        int MenorPrim();
        void Ordenar();
        void Invertir();
        int FPrimo();
};
#endif // INTEGERARRAY_H
