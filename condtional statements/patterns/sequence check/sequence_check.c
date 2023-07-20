#include <stdio.h>
int main()
{
    int arr1[20] = {0};
    int len;
    printf("enter the lenght of the sequence: ");
    scanf("%d", &len);
    int i = 0;
    for (i = 1; i <= len; i++)
    {
        printf("enter element no. %d: ", i);
        scanf("%d", &arr1[i - 1]);
    }
    int c = 0;
    for (i = 0; i < len-1; i++)
    {
        if (arr1[i] >= arr1[i + 1])
        {
            if (c == 1)
            {
                c = 0;
                break;
            }
            c = 0;
        }

        else if (arr1[i] < arr1[i + 1])
        {
            c = 1;
        }
    }

    if (c == 0)
    {
        printf("false");
    }

    else if (c == 1)
    {
        printf("true");
    }

    return 0;
}