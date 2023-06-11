#include<stdio.h>
#include<math.h>
int main()
{
    //printing number from 1 to n
    /*int i=0;
    int n;
    int j;
    printf("enter the number : ");
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i+=1;
    }
    while(i<=n);*/


    /*for( i=0,j=10 ; i<10,j<20 ; i++,j++ ){
        printf("%d %d\n", i,j);
    }*/
    
    /*(for( i=0,j=10 ; i<13,j<20 ; i++,j++ ){ // note that only the last condition is being checked 
        printf("%d %d\n", i,j);
    }
    
    for( i=11,j=10 ; i<10,j<13 ; i++,j++ ){ // see that the condition i<10 has been ignored.
        printf("%d %d\n", i,j);
    }
    for( i=11,j=10 ; i<10 && j<13 ; i++,j++ ){//we can always use logical operators to imply simultaneous conditions
        printf("%d %d\n", i,j);
    }
    for( i=11,j=10 ; i<10 || j<13 ; i++,j++ ){//we can always use logical operators to imply simultaneous conditions
        printf("%d %d\n", i,j);
    }*/
    
    //program to check if a number if prime ornot.
    int a;
    int i;
    int c=1;
    printf("enter the number you want to check: ");
    scanf("%d",&a);
    for(i=2; i<(sqrt(a));i++){
        if(a%i==0){
            printf("the number is not prime.");
            c=0;
            break;
        }
        else{
            c=1;
        }
    }
    if(c==1){
    printf("the number is prime.");
    }
    return 0;
}
