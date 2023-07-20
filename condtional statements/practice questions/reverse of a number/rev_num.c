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
    printf("enter the number to be reversed: ");
    scanf("%d", &n);
    int len = 0;
    int ques = n;
    int rem = 0;
    int arr1[10] = {0};
    while (ques >= 1)
    {
            rem = ques % 10;
            ques = ques / 10;
            arr1[9 - len] = rem;
            len++;
    }
    int i;
    int rev = 0;
    int c=1;
    for (i = 9; i >= 9 - len + 1; i--)
    {
        rev = rev + (arr1[i] * (power(10, len-c)));
        c++;
    }
    printf("reversed number is: %d", rev);
    return 0;
}