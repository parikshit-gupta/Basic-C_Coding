#include<stdio.h>

int main()
{
    int a =120;
    printf("%d", a);
    printf("\n%c", a); // prints the charecter corresponding to ascii value 120
                       // this line tells the complier to treat the memory locationn corresponding to the variable a as a charecter

    char b = '9';
    printf("\n%c", b);
    printf("\n%d", b); // prints the ascii value of the chrecter "9"
                       // this line tells the complier to treat the memory location the variable b as integer

    unsigned int c= -89;
    printf("\n%u", c);

    char d = 1234;
    printf("\n%c", d);
    printf("\n%d", d);
    printf("\n%u", d);

    int e=9.99;
    print("%d", e);
    
    return 0;
}
