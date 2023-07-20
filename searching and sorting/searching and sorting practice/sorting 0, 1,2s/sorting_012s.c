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

    int arr3[20]={0};
    for (i=0; i<20;i++)
    {
        arr3[i]=1;
    }
    
    int c0=0;
    int c2=n-1;
    for (i=0; i<n; i++)
    {
        if (arr1[i]==0)
        {
            arr3[c0]=0;
            c0++;
        }
        else if (arr1[i]==2)
        {
            arr3[c2]=2;
            c2--;
        }
    }

    printf("the sorted array is: ");
    for (i=0; i<n;i++)
    {
        printf("%d", arr3[i]);
    }
    
    return 0; 
}