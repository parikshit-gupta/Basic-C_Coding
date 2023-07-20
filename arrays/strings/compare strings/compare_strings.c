#include <stdio.h>
#include<string.h>
int main()
{
    char input1[100];
    char input2[100];
    int i;
    printf("enter string1: ");
    fgets(input1, 100, stdin);
   
    printf("enter string2: ");
    fgets(input2, 100, stdin);
    
    if (strlen(input1) != strlen(input2))
    {
        printf("the strings are not equal.");
        return 0;
    }
    else
    {
        for (i = 0; i < strlen(input1); i++)
        {
            if (input1[i] != input2[i])
            {
                printf("the strings are not equal.");
                return 0;
            }
        }
    }
    printf("the strings are same.");
    return 0;
}
