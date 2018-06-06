#ifndef AUTOS_H
#define AUTOS_H
#include <string>
using namespace std;
class Autos{
    protected:
        float vel;
        string modelo;
        int an;
    public:
        Autos(float, string, int);
        virtual void espec()=0;
};

class Dodge:public Autos{
    public:
        Dodge(float,string,int);
        void espec();
};

class Ford:public Autos{
    public:
        Ford(float,string,int);
        void espec();
};
#endif // AUTOS_H
