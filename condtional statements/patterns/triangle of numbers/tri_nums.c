#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows needed: ");
    scanf("%d", &n);
    int i, j;
    int c = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= ((2 * n) - 1); j++)
        {
            if ((j <= (n - i)) || (j >= (n + i)))
            {
                printf(" ");
            }
            else if (n - i < j && j < n)
            {
                printf("%d", (((2 * i) - 1) - (n - j)));
            }
            else if (n < j && j < n + i)
            {
                printf("%d", (((2 * i) - 1) +(n-j)));
            }
            else if (j = n)
            {
                printf("%d", 2 * i - 1);
            }
        }
        printf("\n");
    }
    return 0;
}