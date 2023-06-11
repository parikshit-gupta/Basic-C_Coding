#include<stdio.h>
int main()
{
    int i,len;
    int arr1[100];
    printf("enter the lenght of the array you want(less than 100): ");
    scanf("%d", &len);
    if (len>100){
        printf("sorry, the max possible size of the given array can be 100.");
    }


    int c = 0;
    if (len%2==0){
        for(i=1; i<=(len); i=i+2){
                arr1[c]=i;
                arr1[len-c-1]=i+1;
                c=c+1;
            }
    }

    else{
        for(i=1; i<=(len); i=i+2){
            if (c!=((len-1)/2)){
                arr1[c]=i;
                arr1[len-c-1]=i+1;
            }
            else if(c==((len -1 )/2)){
                arr1[c]=i;
            }
            c=c+1;
        }

    }    

    int j=0;
    for(j=0; j<len; j++){
       printf("%d, ", arr1[j]);
    }   
    
    return 0;
}