#include <stdio.h>

void selection_sort(int arr1[], int size)
{
    int start = 0;
    int end;
    end = size - 1;
    int i;
    int c; // storage variable for the swap
    printf("the intial array is:\n");
    for (i = 0; i <= end; i++)
    {
        printf("%d, ", arr1[i]);
    }

    for (start = 0; start < end; start++)
    {
        int min = arr1[start];
        int k = start;      // tells the index where the min value is placed
        for (i = start; i <= end; i++)
        {
            if (arr1[i] < min)
            {
                min = arr1[i];
                k = i;
            }
         
        }
        printf("\n%d", min);
        //swap
        c = arr1[start];
        arr1[start] = min;
        arr1[k] = c;
    }
    printf("the sorted array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr1[i]);
    }
    
}

int main()
{
    int i;
    int arr1[10];
    int n;

    for (i = 0; i < 10; i++)
    {
        printf("enter element number %d: ", i + 1);
        scanf("%d", &n);
        arr1[i] = n;
    }
    selection_sort(arr1, 10);
    return 0;
}
