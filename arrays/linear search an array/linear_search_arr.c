#include<stdio.h>
int linsearch(int arr1[], int size, int n);

int main(int argc, char const *argv[])
{
    //inputing the array
    int i, n;
    int arr1[10];
    
    for (i=0; i<10; i++){
        printf("enter element number %d: ", i+1);
        scanf("%d",&n);
        arr1[i]=n;
    }
    
    printf("Enter the number to be found: ");
    scanf("%d",&n);

    linsearch(arr1, 10, n);
    return 0;
}

int linsearch(int arr1[], int size, int n){
    
    // finding the required element in the array.
    int i;
    int c=0;
    for(i=0; i<size; i++){
        if (n==arr1[i]){
            c=c+1;
            printf("occurence number: %d; at index number: %d\n", c,i);
        }
    }
    if (c==0){
        printf("the given element is not present in the given array.");
        return -1;
    }
    else{
        printf("\nTHE GIVEN ELEMENT OCCURED %d TIMES.", c);
        return 0;
    }
    
}
