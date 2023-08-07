#include <stdio.h>
void leader(int arr1[], int len)
{
    int i, j = 0;
    int arr_lead[20] = {0};
    int lead = arr1[0];
    int c = 0;
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (arr1[i] >= arr1[j])
            {
                continue;
            }
            else if (arr1[i] < arr1[j])
            {
                break;
            }
        }
        if (j == len)
        {
            arr_lead[c] = arr1[i];
            c++;
        }
    }

    printf("leader array is: ");
    for (i = 0; i < c; i++)
    {
        printf("%d, ", arr_lead[i]);
    }
}

int main()
{
    int n;
    printf("enter the lenght if the intarray: ");
    scanf("%d", &n);
    int arr1[20];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d: ", i);
        scanf("%d", &arr1[i]);
    }
    leader(arr1, n);
    return 0;
}