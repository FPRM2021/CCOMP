#include "Point.h"
template <typename T>
T Point<T>::getX(){return x;}

template <typename T>
T Point<T>::getY(){return y;}

template class Point<int>;

template class Point<float>;
