#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d ;
    int l;
    int i,j;
    i=a*a*a + b*b*b;
    j=c*c*c + d*d*d;
    
    printf("enter the range for ramanujan numbers: ");
    scanf("%d", &l);
    for(a=1;a<l;a++){
        for (b=1;b<l;b++){
            /*if(a>b){
                continue;
            }*/
            for (c=1;c<l;c++){
                for (d=1;d<l;d++){
                    /*if(c>d){
                        continue;
                    }*/
                    if (i==j){
                        if ((a==b) | (c==d) | (a==c) | (b==d) | (a==d) | (b==c)){
                            continue;
                            }
                        else{
                            printf("the next ramanujan numbers are: %d\n", i);
                            goto label2;
                        }
                        
                        }
                    }
                }


            }
        }
    printf("no ramanujan number found.");
    label2:
    return 0;
}