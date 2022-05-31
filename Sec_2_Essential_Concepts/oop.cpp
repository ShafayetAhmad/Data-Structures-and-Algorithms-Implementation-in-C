#include <iostream>
using namespace std;

class rectangle
{
public:
    int breadth;
    int width;

    rectangle(int b, int w)
    {
        breadth = b;
        width = w;
    }

    int area()
    {
        return breadth * width;
    }
};

int main()
{
    rectangle r1(10, 4);
    cout << "Area is " << r1.area() << endl;
    return 0;
}