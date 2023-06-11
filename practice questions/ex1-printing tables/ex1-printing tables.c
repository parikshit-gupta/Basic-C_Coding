#include<stdio.h>

int main()
{
    int n;
    int j=1;
    int c;
    c= (n*j);
    printf("Enter the number whose table you want:");
    scanf("%d", &n);
    while (j<=10)
    {
        printf("%d*%d=%d\n",n,j,c);
        j+=1;
        c=n*j;
    
    }
    return 0;
}
