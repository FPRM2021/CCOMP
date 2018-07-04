#include <cctype>
#include <iostream>
using namespace std;

template<typename T>
class Container{
T elt;
public:
    Container(const T arg):elt(arg){}
    T inc(){return elt+1;}
};

template<>
class Container <char>{
private:
    char elt;
public:
    Container (const char arg): elt(arg){}
    char uppercase(){return toupper(elt);}
};
