#include <stdio.h>
int main()
{
    int n;
    printf("enter lenght of array: ");
    scanf("%d", &n);
    int i = 0;
    int arr1[20] = {0};
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d of array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int r;
    printf("enter the number of elements to be rotated: ");
    scanf("%d", &r);

    int arr2[20] = {0};
    for (i = 0; i < n; i++)
    {
        if (i <= n - r - 1)
        {
            arr2[i] = arr1[r + i];
        }
        else if (i > n - r - 1)
        {
            arr2[i] = arr1[i - (n - r)];
        }
    }

    printf("initial array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr1[i]);
    }

    printf("\nrotated array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}