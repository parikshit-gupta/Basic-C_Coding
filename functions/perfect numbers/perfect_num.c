#include<stdio.h>
void perfect_num(int range)
{
    int c=0;
    int arr1[100]={0};
    int i,j;
    for (i=1; i<=range; i++)
    {
        int sum=0;
        for (j=1;j<=i/2;j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
        }
        if (sum==i)
        {
            arr1[c]=sum;
            c=c+1;
        }
    }
    printf("the perfect numbers in the given range are: 1, ");
    for (i=0; i<c; i++)
    {
        printf("%d, ", arr1[i]);
    }
}

int main()
{
    int n;
    printf("enter the range to find perfect numbers: ");
    scanf("%d", &n);
    perfect_num(n);
    return 0;
}
