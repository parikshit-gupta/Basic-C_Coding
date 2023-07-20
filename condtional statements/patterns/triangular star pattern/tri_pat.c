#include<stdio.h>
int main()
{
    int N;
    printf("enter the number of rows needed: ");
    scanf("%d", &N);
    int i=0;
    for (i=1;i<=N; i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}