#ifndef ARRPUNTO_H
#define ARRPUNTO_H
#include "Punto.h"

class ArrPunto
{
    Punto *arr;
    int tam;
    public:
        ArrPunto();
        ArrPunto(Punto [],int);
        ArrPunto(ArrPunto &);
        void Insertar(Punto);
        void Eliminar(int);
        ~ArrPunto();
        void ImpArr();
};

#endif // ARRPUNTO_H
