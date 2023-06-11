#include<stdio.h>

int main()
{
    // printing the sum of first n terms of the series r/r!
    int n;
    float sum = 0;
    float c,fact;
    c=1.0;
    fact=1.0;

    printf("enter the number of terms whose sum you want: ");
    scanf("%d", &n);

    while(c<=n){
        sum=sum+c/fact;
        c=c+1;
        fact=fact*c;
    }
    printf("the sum is: %f", sum );
    return 0;
}
