#include <stdio.h>

void spiral_print(int arr1[][20], int row, int col)
{
    int c = 0;
    int count = 0;
    int total = (row) * (col);
    int rs = 1;
    int cs = 0;
    int re = row - 1;
    int ce = col - 1;
    int i = 0;
    int j = 0;
    while (c < total)
    {
        if (count == 0)
        {
            for (j = cs; j <= ce; j++)
            {
                printf("%d, ", arr1[i][j]);
                c++;
            }
            ce--;
            j--;
            count = 1;
        }
        else if (count == 1)
        {
            for (i = rs; i <= re; i++)
            {
                printf("%d, ", arr1[i][j]);
                c++;
            }
            re--;
            i--;
            count = 2;
        }
        else if (count == 2)
        {
            for (j = ce; j >= cs; j--)
            {
                printf("%d, ", arr1[i][j]);
                c++;
            }
            cs++;
            j++;
            count = 3;
        }
        else if (count == 3)
        {
            for (i = re; i >= rs; i--)
            {
                printf("%d, ", arr1[i][j]);
                c++;
            }
            rs++;
            i++;
            count = 0;
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
            printf("%d, ", arr1[i][j]);
        }
    }
    printf("\nspiral print is: ");
    spiral_print(arr1, row, col);
    return 0;
}