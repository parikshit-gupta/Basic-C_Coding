#include<stdio.h>

void print(int input[],int n){
//void print(int input[]) 
/* it becomes nessacary to pass the size of the array to a function because there is no other way to 
know the size of the array */
    printf("size of input is: %d\n", sizeof(input));/* shows that "input" only holds the adress of the memory location pointing 
    to the first element of "arr1' and the whole array is not copied into "input" when 'arr1' is passed into the 
    function "print"*/

    for(int i =0; i<n; i++){
        printf("%d, ", input[i]);
    }
}

int main()
{
    int arr1[10];
    int n,i;
    for (i=0; i<10; i++){
        printf("enter element number %d: ", i+1);
        scanf("%d",&n);
        arr1[i]=n;
    }

    printf("%d\n", arr1);//the name of the array stores the adress of the first element.
    printf("%x\n", arr1);//%x format specifeier is for hexadecimal numbers
    printf("size of arr1 is: %d\n", sizeof(arr1));// gives the size of the memory block allocated for the array.
    
    print(arr1,10);// passing a array to a function
    return 0;
}
