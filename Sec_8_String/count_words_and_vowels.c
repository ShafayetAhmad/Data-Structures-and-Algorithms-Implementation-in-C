#include <stdio.h>

int wordCount(char str[])
{
    int i = 1, flag = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 32)
            flag++;
        i++;
    }
    return flag;
}

int vowel(char str[])
{
    int i = 0, flag = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            flag++;
        i++;
    }
    return flag;
}

int main()
{
    char str[] = "My Name Is Shafayet";
    printf("Vowel: %d\n", vowel(str));
    printf("Words: %d\n", wordCount(str));
}