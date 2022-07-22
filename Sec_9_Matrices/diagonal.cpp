#include <iostream>
using namespace std;

class Diagonal
{
private:
    int size;
    int *arr;

public:
    Diagonal(int size)
    {
        this->size = size;
        this->arr = new int[5];
    }

    ~Diagonal()
    {
        delete[] arr;
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getDimention() { return size; };
};

void Diagonal::display()
{
    for (int i = 0; i < this->size; i++)
    {
        for (int j = 0; j < this->size; j++)
        {
            if (i == j)
                cout << this->arr[i] << " ";
            else
                cout << "0"
                     << " ";
        }
        cout << endl;
    }
}

int main()
{
}