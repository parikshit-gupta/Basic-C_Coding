#include <stdio.h>
int power(int base, int exp)
{
    int power = 1;
    int i;
    for (i = 1; i <= exp; i++)
    {
        power = power * base;
    }
    return power;
}

int main()
{
    int n;
    printf("enter the number to be converted to decimal: ");
    scanf("%d", &n);
    int i = 0;
    int ques = n;
    int rem = 0;
    int dec = 0;
    while (ques >= 1)
    {
        rem = ques % 10;
        ques = ques / 10;
        if ((rem == 0) || (rem == 1))
        {
            dec = dec + (rem * (power(2, i)));
            i++;
        }
        else
        {
           printf("enter binary number numbers only.");
           return 0;
        }
    }
    printf("the correspoding decimal is: %d", dec);
    return 0;
}