#include <stdio.h>
#include <limits.h>
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
    printf("number to be converted to binary: ");
    scanf("%d", &n);
    int i = 0;
    int ques = n;
    while (ques >= 1)
    {
        ques = ques / 2;
        i++;
    }
    printf("%d", i);

    int j = i - 1;
    int ques1 = n;
    ques = n;
    int bin = 0;
    while (ques1 >= 1)
    {
        ques1 = ques1 - power(2, j);
        if (ques1 >= 0)
        {
            bin = bin + power(10, j);
            ques = ques1;
        }
        else
        {
            ques1 = ques;
        }
        j--;
    }
    
    printf("the binary of the above number is: %d", bin);
    return 0;
}