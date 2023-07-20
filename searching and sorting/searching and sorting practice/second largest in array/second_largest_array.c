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

    int max=0;
    for (i=0;i<n; i++)
    {
        if(arr1[i]>max)
        {
            max= arr1[i];
        }
        else
        {
            continue;
        }        
    }
    int max2=0;
    for (i=0;i<n; i++)
    {
        if (arr1[i]>max2 && arr1[i]<max)
        {
            max2=arr1[i];
        }
    }
    printf("second largest element is: %d", max2);
    return 0;
}