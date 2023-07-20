#include<stdio.h>
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
    int c=0;
    for (i=0; i<n;i++)
    {
        if(arr1[i]<=arr1[i+1])
        {
            continue;
        }
        else
        {
            c = i+1;
            break;
        }
    }
    printf("the given array was rotated by %d elements", n-c);

    return 0;
}