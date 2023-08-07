#include <stdio.h>

void wave_print(int arr1[][20], int row, int col)
{
    int i, j;
    for (j = 0; j < col; j++)
    {
        if ((j % 2) == 0)
        {
            for (i = 0; i < row; i++)
            {
                printf("%d", arr1[i][j]);
            }
        }
        else if ((j % 2) != 0)
        {
            for (i = row - 1; i >= 0; i--)
            {
                printf("%d", arr1[i][j]);
            }
        }
    }
}

int main()
{
    int row, col;
    printf("enter the number of rows: ");
    scanf("%d", &row);

    printf("enter the number of columns: ");
    scanf("%d", &col);

    int arr1[20][20];
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter element (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("intial array is: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr1[i][j]);
        }
    }
    printf("\n");
    wave_print(arr1, row, col);
    return 0;
}