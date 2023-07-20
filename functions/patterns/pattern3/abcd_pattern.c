#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int n;
    printf("%c", 97);
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c", 97+i);
        }
        printf("\n");
    }

    return 0;
}
