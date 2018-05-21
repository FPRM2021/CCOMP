#include "IntegerArray.h"

IntegerArray::IntegerArray(int size)
{
    data = new int[size];
    this->size = size;
}

IntegerArray::IntegerArray(IntegerArray &o){
    data = new int[o.size];
    size = o.size;
    for (int i = 0; i < size; ++i)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray()
{
    delete[] data;
}


void IntegerArray::Insertar(int n){
    data[size++]=n;
}

void IntegerArray::Eliminar(int p){
    for(int i=p;i<size;i++){
        data[i]=data[i+1];
    }
    data[size--];
}

void IntegerArray::Vaciar(){
    delete []data;
}
