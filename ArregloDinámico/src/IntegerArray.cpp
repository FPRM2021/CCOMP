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

void IntegerArray::ImpData(){
    for(int i=0;i<size;i++)
        cout<<data[i]<<" ";
}

void IntegerArray::Insertar(int n){
    int *nuevo=new int[size+1];
    for(int i=0;i<size;i++)
        nuevo[i]=data[i];
    nuevo[size]=n;
    size++;
    delete []data;
    data=nuevo;
}
void IntegerArray::Insertar(int n, int p){
    data[p]=n;
}

void IntegerArray::Eliminar(int p){
    int *nuevo=new int[size-1];
    for(int i=0;i<p;i++)
        nuevo[i]=data[i];
    for(;p<size;p++)
        nuevo[p]=data[p+1];
    size--;
    delete []data;
    data=nuevo;
}

void IntegerArray::Vaciar(){
    int *nuevo=new int[0];
    size=0;
    delete []data;
    data=nuevo;
}
