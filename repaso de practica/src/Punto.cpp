#include "Punto.h"

Punto::Punto(){
    x=0;
    y=0;
}

Punto::Punto(float a, float b){
    x=a;
    y=b;
}

float Punto::getX(){
    return x;
}
float Punto::getY(){
    return y;
}
void Punto::setX(float a){
    x=a;
}
void Punto::setY(float b){
    y=b;
}
