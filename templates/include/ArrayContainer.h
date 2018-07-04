using namespace std;
#include <iostream>

template<typename T, int N>
class ArrayContainer{
    T elts[N];
public:
    T set(const int i, const T val){elts[i]=val;}
    T get(const int i){return elts[i];}
};
