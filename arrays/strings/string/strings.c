#include <stdio.h>
int main(int argc, char const *argv[])
{
    char b[19] = "parik";
    char m[10] = "parikshiet";
    b[10] = 'g';
    printf("%s\n", b);
    printf("%s\n", m);
    char c[100] = "reat";
    // scanf( "%s", &c);
    printf("%s", c);

    char input[20] = "hello world";
    char str[4];
    printf("\nfrom fgets: ");

    //    fgets(input, 10,stdin);
    // fgets(input, 24,stdin);// garbage values are not nbeing printed after the end of the string but they ,ay get printed if \0 is not encountered by chnace
    fgets(input, sizeof(input), stdin); // this does not take string with more than 20(which is the size of input) charecters as input.
    printf("\n%s", input);
    printf("\nenter the string: ");
    scanf("%s", str);
    printf("%s", str);

    char str1[100][100] = {"hello", "world", "pg", "is", "great"};

    for (int j = 0;j<5; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("%c", str1[j][i]);
        }
    }
    return 0;
}
