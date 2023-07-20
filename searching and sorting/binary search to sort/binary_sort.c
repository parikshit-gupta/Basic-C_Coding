#include <stdio.h>
int main()
{
    int arr1[10] = {2, 6, 7, 11, 14, 16, 21, 30, 35, 40};
    int arr2[11] = {0};
    int start = 0;
    int end = 9;
    int mid;
    int n;
    int i;
    printf("enter the number you want to place in the given array: ");
    scanf("%d", &n);
    while (start < end)
    {
        mid = (start + end) / 2;
        // 1)n>arr1[mid]
        if (n < arr1[mid + 1] && n > arr1[mid])
        {
            for (i = 0; i < 11; i++)
            {
                if (i <= mid)
                {
                    arr2[i] = arr1[i];
                }
                else if (i == mid + 1)
                {
                    arr2[mid + 1] = n;
                }
                else if (i > mid + 1)
                {
                    arr2[i] = arr1[i - 1];
                }
            }
            break;
        }
        // 2)n<arr1[mid]
        else if (n > arr1[mid - 1] && n < arr1[mid])
        {
            for (i = 0; i < 11; i++)
            {
                if (i <= mid - 1)
                {
                    arr2[i] = arr1[i];
                }
                else if (i == mid)
                {
                    arr2[mid] = n;
                }
                else if (i > mid)
                {
                    arr2[i] = arr1[i - 1];
                }
            }
            break;
        }

        else if (n > arr1[mid])
        {
            start = mid;
        }
        else if (n < arr1[mid])
        {
            end = mid;
        }
    }
        // printing the sorted array.
        printf("the sorted array is: \n");
        for (i = 0; i < 11; i++)
        {
            printf("%d, ", arr2[i]);
        }
        return 0;
}