#include <stdio.h>

int lengthOfString(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void _toUpperCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 96)
            str[i] -= 32;
        i++;
    }
}

void _toLowerCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 96)
            str[i] += 32;
        i++;
    }
}

int main()
{
    char str[] = "Shafayet";
    printf("%s\n", str);
    printf("Length Of String: %d\n", lengthOfString(str));
    _toUpperCase(str);
    printf("Upper Case String: %s\n", str);
    _toLowerCase(str);
    printf("Lower Case String: %s\n", str);

    return 0;
}