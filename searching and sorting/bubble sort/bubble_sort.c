#include <stdio.h>

void bubble_sort(int arr1[], int size)
{
    int start = 0;
    int end = size - 1;
    int i;
    int c;
    printf("the initial array is:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr1[i]);
    }

    for (end = size-1; end > start; end--)
    {
        for (i = 0; i <= end; i++)
        {
            if (arr1[i + 1] < arr1[i])
            {
                c = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = c;
            }
            
        }
    }
    printf("the sorted array is: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr1[i]);
    }

}



int main()
{
    int arr1[10]={5,3,89,2,4,222,41,342,2322,1};
    bubble_sort(arr1, 10);
    return 0;
}
