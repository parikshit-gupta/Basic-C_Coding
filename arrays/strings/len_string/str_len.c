#include <stdio.h>
int len_str(char str[])
{
    int c = 0;
    for (int i = 0; (str[i]) != '\0'; i++)
    {
        c = c + 1;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    char str[100];
    printf("enter the string: ");
    scanf("%s", str);
    int x = len_str(str);
    printf("%d", x);
    return 0;
}
