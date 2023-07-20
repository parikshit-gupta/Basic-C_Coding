#include <stdio.h>
void merge_sort(int arr1[], int n1, int arr2[], int n2)
{
    int i1, i2, i;
    int c;
    int arr3[100]={0};    


    // arr3=arr1
    for (i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    printf("arr3 is: ");
    for(i=0; i<n1; i++)
    {
        printf("%d, ",arr3[i]);
    }

    // merging using insertion sort algorithm
    for (i2 = 0; i2 < n2; i2++)
    {
        c = arr2[i2];
        for (i1 = n1 - 1; i1 >= 0; i1--)
        {
            if (arr3[i1] >= c)
            {
                arr3[i1 + 1] = arr3[i1];
                arr3[i1] = c;
            }
            else
            {
                arr3[i1 + 1] = c;
                break;
            }
        }
        n1 = n1 + 1;
    }

    // printing sorted array
    printf("\nthe sorted array is: ");

    for (i = 0; i < (n1); i++)
    {
        printf("%d, ", arr3[i]);
    }
}

int main()
{
    int arr1[10] = {1, 6, 7, 31, 45, 67, 78, 90, 101, 230};
    int arr2[7] = {2, 9, 19, 45, 91, 101, 320};
    merge_sort(arr1, 10, arr2, 7);
    return 0;
}
