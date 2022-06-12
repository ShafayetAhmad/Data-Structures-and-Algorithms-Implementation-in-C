#include <stdio.h>

int binarySearch(int arr[], int length, int key)
{
    int low = 0, high = length;
    while (!(low > high))
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else
        {
            if (key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 6, 8, 12, 45, 67, 89, 99};
    printf("%d\n", binarySearch(arr, 9, 99));
    return 0;
}