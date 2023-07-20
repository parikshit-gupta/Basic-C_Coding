// given a array containg 0s and 1s sort the array with 0s on left and 1s on right, max n loops and no extra array to be taken
#include <stdio.h>
int main()
{
    int arr[15] = {1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1};
    int i;
    int c0=0;
    int c1=0;

    for (i = 0; i < 15; i++)
    {
        if (arr[i]==0)
        {
            c0=c0+1;
        }
        else if (arr[i]==1)
        {
            c1=c1+1;
        }
    }

    for (i = 0; i < 15; i++)
    {
        if(i<c0)
        {
            arr[i]=0;
        }
        else if (c0<i<c1)
        {
            arr[i]=1;
        }
    }
    printf("the sorted array is: ");
    for (i = 0; i < 15; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}


/*if (arr[i] == 0 && arr[i + 1] == 0)
        {
            continue;
        }
        else if (arr[i] == 0 && arr[i + 1] == 1)
        {
            continue;
        }
        else if (arr[i] == 1 && arr[i + 1] == 0)
        {
            arr[i] = 0;
            arr[i + 1] = 1;
        }
        else if (arr[i] == 1 && arr[i + 1] == 1)
        {
            continue;
        }
    }*/