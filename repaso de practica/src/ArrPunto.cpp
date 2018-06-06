#include "ArrPunto.h"

ArrPunto::ArrPunto(){
    tam=0;
    arr=new Punto[tam];
}

ArrPunto::ArrPunto(Punto a[],int t){
    tam=t;
    arr=a;
}

ArrPunto::~ArrPunto(){
    delete []arr;
}

ArrPunto::ArrPunto(ArrPunto &o){
    tam=o.tam;
    arr=new Punto[tam];
    for(int i=0;i<tam;i++)
        arr[i]=o.arr[i];
}

void ArrPunto::Insertar(Punto a){
    Punto *nuevo=new Punto[tam+1];
    for(int i=0;i<tam;i++)
        nuevo[i]=arr[i];
    nuevo[tam]=a;
    tam++;
    delete []arr;
    arr=nuevo;
}

void ArrPunto::Eliminar(int p){
    Punto *nuevo=new Punto[tam-1];
    for(int i=0;i<p;i++)
        nuevo[i]=arr[i];
    for(int i=p;i<tam-1;i++)
        nuevo[i]=arr[i+1];
    tam--;
    delete []arr;
    arr=nuevo;
}

void ArrPunto::ImpArr(){
    for(int i=0;i<tam;i++){
        cout<<arr[i].getX()<<","<<arr[i].getY()<<" ";
    }
}
