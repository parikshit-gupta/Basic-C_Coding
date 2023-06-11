#include<stdio.h>
#define c 6.789
int main()
{
    const int d = 122;
    int a =1234;
    float b=7.334;
    //d=123;//will give error as d has aldready been defined as constant.
    printf("%fhello%d\n",b,a);
    printf("%d", d);
    //printf("%c\n",a);
    //printf("%f\n",a);
    printf(",%12.4f,\n",b);// in %12.4f '12' is the total number of charecters in the output and '4' is the number of decimal points to be shown.
    printf(",%-12.4f,\n",b);//-12 adds the extra whitespace after b
    printf(",%2.2f,\n",b);//passing less number of charecter than in the output will not change anything
    printf("newline\n");
    printf("newline\\n");//escapes backslash itself
    printf("\nmysound\a");//produces windows sound
    
    
    return 0;
}
