
#include <stdio.h>
int power(int base, int exponent)
{
    int i = 0;
    int power = 1;
    for (i = 0; i < exponent; i++)
    {
        power = power * base;
    }
    return power;
}

int main()
{
    int n;
    printf("enter lenght of array: ");
    scanf("%d", &n);
    int i = 0;
    int arr1[20] = {0};
    int n1 = 0;
    for (i = 0; i < n; i++)
    {
        printf("enter element number %d of array1: ", i + 1);
        scanf("%d", &arr1[i]);
        n1 = n1 + (arr1[i] * (power(10, n - 1 - i)));
    }

    int m;
    printf("enter lenght of array: ");
    scanf("%d", &m);
    int arr2[20] = {0};
    int n2 = 0;
    for (i = 0; i < m; i++)
    {
        printf("enter element number %d of array2: ", i + 1);
        scanf("%d", &arr2[i]);
        n1 = n1 + (arr2[i] * (power(10, m - 1 - i)));
    }

    int sum = n1 + n2;
    printf("the sum of the two arrays is: %d", sum);

    return 0;
}
