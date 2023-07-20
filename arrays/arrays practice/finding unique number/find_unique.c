#include <stdio.h>
int main()
{
    int n;
    printf("enter the odd integer lenght of the array: ");
    scanf("%d", &n);
    int i,j;
    int arr1[50] = {0};
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d", &arr1[i]);
    }

    int uni=0;
    int count=1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n; j++)
        {
            if (j!=i)
            {
                if (arr1[i]==arr1[j])
                {
                    count++;
                }
                else if (arr1[i]!=arr1[j])
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
        if (count==1)
        {
            uni=arr1[i];
            break;
        }
        count=1;
    }
    printf ("the unique number is: %d", uni);

    return 0;
}