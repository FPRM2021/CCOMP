#ifndef CURSO_H
#define CURSO_H
#include <string>

using namespace std;

class curso
{
    public:
        string nombre;
        double promedio;
        curso(string, double);
        void setearPromedio(double prom);
        void setearNombre(string n);
        float obtenerPromedio();
        string obtenerNombre();
        string obtenerInfo();

};

    void ordbur(curso[],int);
    void impcur(curso[],int);
#endif // CURSO_H
