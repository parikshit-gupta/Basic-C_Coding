#include <stdio.h>
int main()
{
    int sum;
    printf("enter the required sum: ");
    scanf("%d", &sum);

    int i, j;
    int n;
    printf("enter the lenght of the array: ");
    scanf("%d", &n);

    int c = 0;
    int arr1[50] = {0};
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (j == i || i == k || j == k)
                {
                    continue;
                }
                else
                {
                    if ((arr1[i] + arr1[j] + arr1[k] == sum))
                    {
                        c++;
                    }
                }
            }
        }
    }
    printf("the number of required pairs is: %d", c);
    return 0;
}