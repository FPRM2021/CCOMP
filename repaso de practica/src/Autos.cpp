#include "Autos.h"
#include <string>
#include<iostream>
using namespace std;
Autos::Autos(float ve,string model,int anho):vel(ve),modelo(model),an(anho){}

Dodge::Dodge(float ve,string model,int anho):Autos(ve,model,anho){}

void Dodge::espec(){
    cout<<"Las especificaciones son las siguiente:"<<endl;
    cout<<"Velocidad: "<<vel<<" Modelo: "<<modelo<<" Anho: "<<an<<endl;
}

Ford::Ford(float ve,string model, int anho):Autos(ve,model,anho){}

void Ford::espec(){
    cout<<"Las especificaciones son las siguiente:"<<endl;
    cout<<"Velocidad: "<<vel<<" Modelo: "<<modelo<<" Anho: "<<an<<endl;
}

