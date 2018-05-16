#include "curso.h"
#include <iostream>
#include <sstream>

curso::curso(string n, double p){
    nombre=n;
    promedio=p;
}

void curso::setearPromedio(double prom){
    promedio=prom;
}

void curso::setearNombre(string n){
    nombre=n;
}

float curso::obtenerPromedio(){
    return promedio;
}

string curso::obtenerNombre(){
    return nombre;
}

string curso::obtenerInfo(){
    stringstream ss;
    ss<<promedio;
    return "El nombre del curso es: "+nombre+" y el promedio es: "+ss.str();
}

void ordbur(curso a[],int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i].promedio>a[j].promedio){
                double aux=a[i].promedio;
                a[i].promedio=a[j].promedio;
                a[j].promedio=aux;
            }
        }
    }
}

void impcur(curso a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i].promedio<<" ";
    }
}



