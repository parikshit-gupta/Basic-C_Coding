#include<stdio.h>

int main()
{
    /*int a=0;
    int b=0;

    printf("if passed in a subject enter 1.\n");
    printf("if not passed enter 0.\n");
    
    printf("passed in maths: \n");
    scanf("%d", &a);
    
    printf("passed in science: \n");
    scanf("%d",&b);
    
    if ((a||b)==0){
        printf("\nsorry no gift for you, better luck next time. :)");
    }
    
    else if((a==0 && b==1) || (a==1 && b==0)){
        printf("\nCongratulations you recieve Rs15.");
    }
    
    else if(a&&b==1){
        printf("\ncongratulations you recieve Rs45.");

    }
    */

    int c,d;
    printf("enter a number c.\n");
    scanf("%d",&c);
    printf("enter the value of d.\n");
    scanf("%d", &d);
    switch (c)
    {
    case (3):
        printf("value of c is not 4");
        switch (d)
        {
        case 34:
            printf("value of d is 34.");
            break;// will break off the most recent switch and not all switches.
        
        default:
            printf("value of d is not 34.");
            break;
        }
        
        break;
    
    case 4:
        printf("value of c is 4.");
        break;
    
    default:
        printf("hemlom.");
        break;
    }
    return 0;
}
