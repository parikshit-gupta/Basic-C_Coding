#include<stdio.h>
//to print the fibbonaci sequence  upto nth terms

void fibbo(int n){
    int f1=0;
    int f2=1;
    printf("%d, %d, ", f1,f2);
    int c=2;
    while((2*c)<=n){
        f1=f1+f2;
        f2=f2+f1;
        c=c+1;
        printf("%d, %d, ", f1, f2);
    }
}


int main()
{
    int n;
    printf("enter the number of terms of fibbonacci series: ");
    scanf("%d", &n);
    fibbo(n);
    return 0;

}
