#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H


class IntegerArray {
    public:
        int *data;
        int size;
        IntegerArray(int);
        IntegerArray(IntegerArray &);
        ~IntegerArray();
        void ImpData();
        void Insertar(int);
        void Eliminar(int);
        void Vaciar();
};
#endif // INTEGERARRAY_H
