#include <iostream>
using namespace std;

// By using template we can use same class for multiple data types
template <class T>
class rectangle
{
public:
    T breadth;
    T width;

    rectangle(T b, T w)
    {
        breadth = b;
        width = w;
    }

    T area()
    {
        return breadth * width;
    }
};

int main()
{
    rectangle<int> r1(10, 4);
    cout << "Area is " << r1.area() << endl;
    return 0;
}