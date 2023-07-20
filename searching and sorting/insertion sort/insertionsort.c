#include <stdio.h>

void insertion_sort(int arr1[], int size)
{
    int i;
    int end = size - 1;
    int start = 1;
    int c;
    
    for (start = 1; start <=end; start++)
    {
        c = arr1[start];
        for (i = (start - 1); i >= 0; i--)
        {
            if (c < arr1[i])
            {
                arr1[i + 1] = arr1[i];
                arr1[i]=c;
            }
            else if (c > arr1[i])
            {
                break;
            }
        }
    }
    //printing the sorted array.
    printf("the sorted array is: \n");
    for(i=0;i<=end; i++)
    {
        printf("%d, ", arr1[i]);
    }
}

int main()
{
    int arr1[10]={34,23,1,94,145,1,34,422,99,83};
    insertion_sort(arr1, 10);
    return 0;
}
