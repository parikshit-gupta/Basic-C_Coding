#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i,j=0;
    int c=0;
    for (i=97;i<=n+96; i++)
    {
        c=i;
        for (j=1; j<=i-96; j++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}