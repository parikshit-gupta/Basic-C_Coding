#include<stdio.h>
// creating a user inputed array
int main()
{
    int i,len;
    int arr1[100];
    int n;
    printf("enter the lenght of the array you want(less than 100): ");
    scanf("%d", &len);
    if (len>100){
        printf("sorry, the max possible size of the given array can be 100.");
        return 0;
    }

    for (i=0; i<len; i++){
        printf("enter element number %d: ", i+1);
        scanf("%d",&n);
        arr1[i]=n;
    }
    //printf("the array is: ", arr1[100]);
    
    return 0;


}
