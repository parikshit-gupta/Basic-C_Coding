#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the lenght of the array 1: ");
    scanf("%d", &n);
    printf("enter the lenght of the array 2: ");
    scanf("%d", &m);
    int i,j;
    int arr1[50] = {0};
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    int arr2[50] = {0};
    for (i = 0; i < m; i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d", &arr2[i]);
    }

    int arr3[50]={0};
    int c=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[c]=arr1[i];
                c++;
                break;
            }
            else
            {
                continue;
            }
        }

    }
    printf("the intersection array is: ");
    for (i=0; i<c; i++)
    {
        printf("%d", arr3[i]);
    }

    return 0;
}