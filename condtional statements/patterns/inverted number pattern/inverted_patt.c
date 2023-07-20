#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i,j;
    int c=0;
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}