#include<stdio.h>

int main()
{
    int a,b;
    float e=9.99;
    printf("%d\n", e);

    int f=9.99;
    printf("%d", f);

    printf("enter number a: ");
    scanf("%d", &a);
    
    printf("enter number b: ");
    scanf("%d", &b);
    
    printf("sum is: %d", (a+b));

    int mid, start, end;
    start=2;
    end=3;
    mid = (start + end) / 2;
    printf("\nmid: %d", mid);

    
    return 0;
}
