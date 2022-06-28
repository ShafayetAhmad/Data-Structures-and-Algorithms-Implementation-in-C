#include <stdio.h>
#include <stdbool.h>

bool check(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 6, 4, 5};
    printf("%d\n", check(arr));

    return 0;
}