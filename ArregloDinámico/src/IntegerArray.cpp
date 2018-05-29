#include "IntegerArray.h"
IntegerArray::IntegerArray(int a[],int tam){
    this->tam = tam;
    data=new int [tam];
    for(int i=0;i<tam;i++){
        data[i]=a[i];
    }
}

IntegerArray::IntegerArray(IntegerArray &o){
    data = new int[o.tam];
    tam = o.tam;
    for (int i = 0; i < tam; ++i)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray(){
    delete[] data;
}

void IntegerArray::ImpData(){
    for(int i=0;i<tam;i++)
        cout<<data[i]<<" ";
}

void IntegerArray::Insertar(int n){
    int *nuevo=new int[tam+1];
    for(int i=0;i<tam;i++)
        nuevo[i]=data[i];
    nuevo[tam]=n;
    tam++;
    delete []data;
    data=nuevo;
}

void IntegerArray::Insertar(int p, int n){
    int *nuevo=new int[tam+1];
    for(int i=0;i<p;i++)
        nuevo[i]=data[i];
    nuevo[p]=n;
    for(int i=p;i<tam;i++)
        nuevo[i+1]=data[i];
    tam++;
    delete []data;
    data=nuevo;
}

void IntegerArray::Modificar(int p, int n){
    data[p]=n;
}

void IntegerArray::Eliminar(int p){
    int *nuevo=new int[tam-1];
    for(int i=0;i<p;i++)
        nuevo[i]=data[i];
    for(;p<tam;p++)
        nuevo[p]=data[p+1];
    tam--;
    delete []data;
    data=nuevo;
}

void IntegerArray::Vaciar(){
    int *nuevo=new int[0];
    tam=0;
    delete []data;
    data=nuevo;
}

int IntegerArray::Mayor(){
    int mayor=data[0];
    for(int i=1;i<tam;i++){
        if (mayor<data[i])
            mayor=data[i];
    }
    return mayor;
}

int IntegerArray::Menor(){
    int menor=data[0];
    for(int i=1;i<tam;i++){
        if (menor>data[i])
            menor=data[i];
    }
    return menor;
}

int IntegerArray::Suma(){
    int sum=0;
    for(int i=0;i<tam;i++)
        sum+=data[i];
    return sum;
}

int IntegerArray::Promedio(){
    return Suma()/tam;
}

int IntegerArray::MayorPrim(){
    int c=0;
    int pM=FPrimo();
    for(int i=0;i<tam;i++){
        if(data[i]<2)
            c++;
        for(int e=2;e<data[i];e++){
            if(!(data[i]%e))
                c++;
        }
        if(c==0){
            if(pM<data[i])
                pM=data[i];
        }
        c=0;
    }
    return pM;
}

int IntegerArray::MenorPrim(){
    int c=0;
    int pm=FPrimo();
    for(int i=0;i<tam;i++){
        if(data[i]<2)
            c++;
        for(int e=2;e<data[i];e++){
            if(!(data[i]%e))
                c++;
        }
        if(c==0){
            if(pm>data[i])
                pm=data[i];
        }
        c=0;
    }
    return pm;
}

void IntegerArray::Ordenar(){
    for(int i=0;i<tam;i++){
        for(int j=i+1;j<tam;j++){
            if(data[i]>data[j]){
                int aux=data[i];
                data[i]=data[j];
                data[j]=aux;
            }
        }
    }
}

void IntegerArray::Invertir(){
    for(int i=0;i<tam/2;i++){
        int aux=data[i];
        data[i]=data[tam-1-i];
        data[tam-1-i]=aux;
    }
}

int IntegerArray::FPrimo(){
    int c=0;
    int pm;
    for(int i=0;i<tam;i++){
        if(data[i]<2)
            c++;
        for(int e=2;e<data[i];e++){
            if(!(data[i]%e))
                c++;
        }
        if(c==0){
            pm=data[i];
            return data[i];
        }
        c=0;
    }
}


