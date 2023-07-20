#include <stdio.h>
int main()
{
    int n;
    printf("enter the lenght of the binary array: ");
    scanf("%d", &n);
    int i;
    int arr1[50] = {0};
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("the initial array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr1[i]);
    }

    int c=0;
    for (i = 0; i < n; i++)
    {
        if (arr1[i]==1);
        c=i;
        break;
    }

    arr1[n] = 1;
    arr1[n + 1] = 1;
    for (i = 0; i < n ; i++)
    {
        if ((arr1[i] == 0 && arr1[i + 1] == 0))
        {
            continue;
        }
        else if ((arr1[i] == 0) && (arr1[i + 1] == 1))
        {
            if (arr1[i + 2] == 0)
            {
                continue;
            }
            else if (arr1[i + 2] == 1)
            {
                c = i + 1;
            }
        }
        else if (arr1[i] == 1 && arr1[i + 1] == 0)
        {
            if (arr1[i - 1] == 0)
            {
                arr1[i] = 0;
                arr1[i + 1] = 1;
                c = i + 1;
            }
            else if (arr1[i - 1] == 1)
            {
                arr1[c] = 0;
                c++;
                arr1[i + 1] = 1;
            }
        }
        else if (arr1[i] == 1 && arr1[i + 1] == 1)
        {
            continue;
        }
    }

    printf("\nthe sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr1[i]);
    }

    return 0;
}