#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
using namespace std;

class Punto{
    float x,y;
    public:
        Punto();
        Punto(float, float);
        float getX();
        float getY();
        void setX(float);
        void setY(float);
};
#endif // PUNTO_H
