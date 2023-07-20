#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i,j;
    int c=0;   
    for(i=1; i<=n;i++)
    {
        for (j=n-1;j>=i;j--)
        {
            printf("*");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    } 
    return 0;
}