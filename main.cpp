#include <iostream>
#include <POO.h>

using namespace std;

void ordbur(POO cursos[],int len){
    for(int i=0; i<len;i++){
        for(int j=i+1;j<len;j++){
            if(cursos[i].promedio>cursos[j].promedio){
                int aux=cursos[i].promedio;
                cursos[i].promedio=cursos[j].promedio;
                cursos[j].promedio=aux;
            }
        }

    }
}

void impcad(POO cursos[],int len){
    for(int i=0;i<len;i++){
        cout<<cursos[i].promedio<<" ";
    }
}

void ordburc(POO cursos[]){
    for(int i=0;cursos[i].nombre=!'\0';i++){
        for(int j=i+1;cursos[j].nombre=!'\0';j++){
            if(cursos[i].promedio>cursos[j].promedio){
                int aux=cursos[i].promedio;
                cursos[i].promedio=cursos[j].promedio;
                cursos[j].promedio=aux;
            }
        }

    }
}


int main(){
    POO cursos[5];
    cursos[0].nombre="Ciencia de la Computación";
    cursos[0].promedio=18;
    cursos[1].nombre="Matematica II";
    cursos[1].promedio=11;
    cursos[2].nombre="ICC";
    cursos[2].promedio=17;
    cursos[3].nombre="Discretas II";
    cursos[3].promedio=16;
    cursos[4].nombre="IVU";
    cursos[4].promedio=14;

    //ordbur(cursos,5);
    //impcad(cursos,5);


    return 0;
}
