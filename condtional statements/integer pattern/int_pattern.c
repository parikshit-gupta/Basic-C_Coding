#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int c = i;
        for (k = n - i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", c);
            c = c + 1;
        }
        printf("\n");
    }
    return 0;
}
