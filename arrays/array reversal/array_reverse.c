#include<stdio.h>
int main()
{
    int i, n;
    int arr1[10];
    //inputing array from user.
    for (i=0; i<10; i++){
        printf("enter element number %d: ", i+1);
        scanf("%d",&n);
        arr1[i]=n;
        }
    //printing initial array
    printf("the intial array is: ");
    for(i=0;i<n;i++){
        printf("%d, ", arr1[i]);
    }


    //reversing array    
    int c = 0 ;
    if (n%2!=0){
        for(i=0;i<((n-1)/2);i++){
            c= arr1[i];
            arr1[i]=arr1[n-i-1];
            arr1[n-i-1]=c;      
        }
    }
    else{
        for(i=0;i<(n/2);i++){
            c= arr1[i];
            arr1[i]=arr1[n-i-1];
            arr1[n-i-1]=c;
        }
    }
    
    // printing reversed array
    printf("the reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d, ", arr1[i]);
    }


    return 0;
}
