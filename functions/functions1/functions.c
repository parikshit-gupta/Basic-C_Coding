#include<stdio.h>
#include<math.h>

//factorial
int factorial(int n){
    int i=1;
    int fact=1;
    while (i<=n){
        fact=fact*i;
        i=i+1;
    }
    return fact;

}

// checking for primes
int isprime(int n){
    int i=2;
    while (i<n){
        if (n%i==0){
            return 0;
        }
        i=i+1;
    }
    return 1;
}


int main( )
{
 
    int a ;
    int j;
    j=2;
    printf("Enter the number till which primes you want to print: ");
    scanf("%d", &a);

    while (j<=a){
        if (isprime(j)==1){
            printf("%d\n", j);
            
        }
        j=j+1;
    }


    /*int c =factorial(10);
    printf("the factorial of 10 is: %d", c);
    int d,e ;
    d = isprime(19);
    e = isprime(20);
    printf("\n%d\n%d", d, e);*/
    
    
    return 0;
}
