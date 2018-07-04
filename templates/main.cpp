#include <iostream>
#include "Point.h"
#include "Container.h"
#include "ArrayContainer.h"
using namespace std;

int sum(const int x, const int y){
    return x+y;
}

double sum(const double x, const double y){
    return x+y;
}

template<typename T>
T sum(const T a, const T b){
    return a+b;
}

template<typename T, typename U>
U sum(const T a, const U b){
    return a+b;
}

int main()
{
    cout<<sum<int>(1,2)<<endl;
    cout<<sum<float>(1.21,2.43)<<endl;
    cout<<sum<int,float>(5,2.8)<<endl;
    Point<float>fpoint(2.5,3.9);
    cout<<fpoint.getX()<<", "<<fpoint.getY()<<endl;
    Container<int> icont(5);
    Container<char>ccont('r');
    cout<<icont.inc()<<endl;
    cout<<ccont.uppercase()<<endl;
    ArrayContainer<int,5>intac;
    ArrayContainer<float,10>floattac;
    intac.set(2,45);
    floattac.set(3,4.7);
    cout<<intac.get(2)<<endl;
    cout<<floattac.get(3)<<endl;
return 0;
}
