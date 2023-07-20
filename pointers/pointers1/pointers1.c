#include<stdio.h>
int main()
{
    int i=9;
    printf("%x\n", &i); //gives the address of i as output
    int *p=&i;
    printf("%d\n", *p);
    printf("%x\n", p);
    printf("%d\n", sizeof(p));

    p=p+1;
    printf("%x", p);

    char b[]="abc";
    char *c=&b[0];
    printf("\n%x", c);//prints the hexadecimal equivalent of the string
    printf("\n%s", c);// prints the whiole string itself
    char l='k';
    char *m=&l;
    
    printf("\n%s", m);


    return 0;
}
