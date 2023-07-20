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
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr1[i-1]!=0 && arr1[i] == 0)
        {
            count = i;
            if (arr1[i] == 0 && arr1[i + 1] != 0)
            {
                arr1[count] = arr1[i + 1];
                arr1[i + 1] = 0;
            }
            else if (arr1[i]==0 && arr1[i+1] == 0)
            {
                continue;
            }
        }
        else if (arr1[i-1]==0 && arr1[i] == 0)
        {
            if (arr1[i] == 0 && arr1[i + 1] != 0)
            {
                arr1[count] = arr1[i + 1];
                arr1[i + 1] = 0;
                count++;
            }
            continue;
        }
    }
    printf("the sorted array is: ");
    for (i=0; i<n;i++)
    {
        printf("%d", arr1[i]);
    }

    return 0;
}