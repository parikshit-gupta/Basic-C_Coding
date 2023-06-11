#include<limits.h>
#include<stdio.h>
int main()
{
    int i, n;
    int arr1[10];
    for (i=0; i<10; i++){
       printf("enter element number %d: ", i+1);
       scanf("%d",&n);
       arr1[i]=n;
    }
    //int max=0;              // this code will fail when all the elements of the array are negetive.
    int max =INT_MIN;
    for (i=0; i<10; i++){   // to solve this we can initialise max wil the minimum possible value that can be stored.
        if(arr1[i]>max){    // this vlaue is stored in a system constant called INT_MIN present in the "climits" file.
            max=arr1[i];
        }
    } 
    printf("the max value in the given array is: %d", max);

    return 0;
}
