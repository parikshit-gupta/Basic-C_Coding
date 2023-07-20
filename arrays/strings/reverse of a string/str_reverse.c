#include <stdio.h>

void rev_str(char str[])
{
    printf("the original string is: %s", str);
    int c = 0;
    int i;
    char str2[100];
    for (i = 0; (str[i]) != '\0'; i++)
    {
        c = c + 1;
    }

    char d;
    for (i = 0; i < c; i++)
    {
        str2[i] = str[c - i - 1];
    }
    printf("\nthe reversed string is: ");
    printf("%s", str2);
}

int main()
{
    char str[100] = "hello world";
    rev_str(str);
    return 0;
}
