template<typename T>
class Point{
    T x,y;
public:
    Point(const T u, const T v): x(u), y(v){}
    T getX();
    T getY();
};
