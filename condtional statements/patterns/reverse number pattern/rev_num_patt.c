#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i,j=0;
    for (i=1;i<=n; i++)
    {
        for (j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}