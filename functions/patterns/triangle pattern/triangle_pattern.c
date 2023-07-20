#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("enter the number of rows: ");
    scanf("%d", &n);
    for (j = n; j >= 1; j--)
    {
        if (j > 1)
        {
            for (i = 1; i < 2 * n; i++)
            {
                if (i <= j - 1 || i >= (2 * n) - j + 1)
                {
                    printf("%c", ' ');
                }
                else if (i == j || i == (2 * n) - j)
                {
                    printf("%c", '*');
                }
                else if (i >= j + 1 && i <= (2 * n) - 1 + j)
                {
                    printf("%c", ' ');
                }
            }
            printf("\n");
        }
        else if (j == 1)
        {
            for (k = 1; k < (2 * n); k=k+2)
            {
                printf("%c%c", '*', ' ');
            }
        }
    }
    return 0;
}
