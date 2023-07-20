#include<stdio.h>
int pow(int base, int exp)
{
    int pow=1;
    int i=0;
    for (i=0; i<exp; i++)
    {
        pow=pow*base;
    }
    return pow;
}
int main()
{
    int n;
    int i;
    int q;
    int sum_e=0;
    int sum_o=0;
    printf("enter the number: ");
    scanf("%d", &n);
    int k =n;
    for (i=5; i>=0; i--)
    {
        int c=pow(10, i);
        q=k/c;
        k=k%c;
        if (q%2==0)
        {
            sum_e=sum_e+q;
        }
        else if (q%2!=0)
        {
            sum_o=sum_o+q;
        }
    }
    printf("sum of even digits is: %d\n", sum_e);
    printf("sum of odd digits is: %d", sum_o);
    return 0;
}
