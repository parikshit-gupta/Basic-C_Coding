#include <stdio.h>
#include <string.h>
int main()
{
    char input1[1000];
    char input2[1000];
    char concat[2000];

    printf("enter string1: ");
    scanf("%s",&input1);
    printf("enter string2: ");
    scanf("%s",&input2);;
    int c1 = strlen(input1);
    int c2 = strlen(input2);
    // concatenation
    int i;
    for (i = 0; i < c1 + c2+2; i++)
    {
        if (i < c1)
        {
            concat[i] = input1[i];
        }
        else if (i == c1)
        {
            continue;
        }
        else if (i > c1)
        {
            concat[i-1] = input2[i-c1-1];
        }
    }

    // printing the final string
    printf("the final string is: %s", concat);
    
    return 0;
}
