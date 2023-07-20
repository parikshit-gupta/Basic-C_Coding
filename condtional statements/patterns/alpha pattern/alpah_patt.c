#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i,j=0;
    for (i=97;i<=n+96; i++)
    {
        for (j=1; j<=i-96; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}