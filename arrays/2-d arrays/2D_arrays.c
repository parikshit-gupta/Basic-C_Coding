#include<stdio.h>

void prin_2darray(int arr1[][100], int row, int col)
{
    int i,j=0;
    printf("the 2-D array is:\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int row, col;
    int i, j;
    int arr1[100][100];

    printf("enter the number of rows: ");
    scanf("%d", &row);
    
    printf("enter the number of columns: ");
    scanf("%d", &col);

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("enter (%d,%d) element: ", i,j);
            scanf("%d", &arr1[i][j]);    
        }
    }

    prin_2darray(arr1, row, col);
    
    return 0;
}
