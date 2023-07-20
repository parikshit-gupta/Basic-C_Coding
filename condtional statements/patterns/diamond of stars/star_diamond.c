#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    int i, j;
    int c = 0;
    for (i = 1; i <= (2 * n - 1); i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= 2 * n - 1; j++)
            {
                if ((j <= (n - i)) || (j >= (n + i)))
                {
                    printf(" ");
                }
                else if (j > (n - i) && j < (n + i))
                {
                    printf("*");
                }
            }
        }
        if (i>n)
        {
            for (j = 1; j <= 2 * n - 1; j++)
            {
                if ((j <= (i-n)) || (j >= (3*n -i)))
                {
                    printf(" ");
                }
                else if (j > (i-n) && j < (3*n - i))
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}