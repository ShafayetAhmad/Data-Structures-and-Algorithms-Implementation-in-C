#include <stdio.h>

int binarySearch(int arr[], int length, int key)
{
    int low = 0, high = length;
    while (low < high)
    {
        int test = (low + high) / 2;
        if (arr[test] == key)
            return test;
        else
        {
            if (key < arr[test])
                high = test;
            else
                low = test;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 8, 12, 45, 67, 89, 99};
    printf("%d\n", binarySearch(arr, 9, 68));
    return 0;
}