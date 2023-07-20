#include <stdio.h>
int bin_search(int arr1[], int size, int num);

int main()
{
    int i, n, len;
    int arr1[100];
    // inputing array lenght
    printf("enter the lenght of the array you want(less than 100): ");
    scanf("%d", &len);
    if (len > 100)
    {
        printf("sorry, the max possible size of the given array can be 100.");
    }

    // inputing sorted array from user.
    for (i = 0; i < len; i++)
    {
        printf("enter element number %d: ", i + 1);
        scanf("%d", &n);
        arr1[i] = n;
    }

    int num;
    printf("\nenter the number to be searched: ");
    scanf("%d", &num);
    int x = bin_search(arr1, len, num);
    if (x == 0)
    {
        printf("the given number was not found.");
    }

    return 0;
}

// binary search

int bin_search(int arr1[], int size, int num)

{
    int mid, start, end;
    start = 0;
    end = size - 1;
    mid = (start + end) / 2;
    int c = 0;
    if (arr1[0] == num || arr1[size - 1] == num)
    {
        printf("the given number was found at the extrema index of the array.");
        return 1;
    }
    else
    {
        while (start < end)
        {
            if (arr1[mid] == num)
            {
                printf("the given number was found at index %d of the array.", mid);
                return 1;
            }
            else if (num > arr1[mid])
            {
                start = mid;
            }
            else if (num < arr1[mid])
            {
                end = mid;
            }
        }
    }
    return 0;
}
