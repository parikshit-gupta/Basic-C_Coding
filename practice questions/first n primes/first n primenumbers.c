#include<stdio.h>
#include<math.h>

int main()
{
    // program to print all primes between 1 to n
    int n;
    int prime,j;
    int is_prime=1;
    printf("enter the number till which you want primes: ");
    scanf("%d",&n);
    
    for(prime=2; prime<=n; prime++){
        
        for(j=2 ; j<=((sqrt(prime))) ; j++){             //checking for primes
            
            if (prime%j==0){
                is_prime=0;
                break;
            }
            else{
                is_prime=1;
            }
        }

    if(is_prime==1){
        printf("%d\n", prime);
    }
        

    }
    return 0;
}

