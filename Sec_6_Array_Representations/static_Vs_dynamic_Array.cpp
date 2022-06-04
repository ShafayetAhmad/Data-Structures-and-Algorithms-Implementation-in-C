#include <iostream>
int main()
{
    int *arr = new int[5];                      // dynamic array in heap in C++
    int *arr2 = (int *)malloc(5 * sizeof(int)); // dynamic array in heap in C

    delete[] arr; // memory deallocation in C++
    free(arr2);   // memory deallocation in C
}