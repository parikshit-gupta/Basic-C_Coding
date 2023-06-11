#include<stdio.h>

int main()
{
    //printing all possible numbers formed by 1,2,3 without repitition

    int i,j,k;
    int num,x,y,z;
    int nums[]={1,2,3};
    printf("the combinations are: \n");

    for(i=0; i<3 ; i++){
        x=nums[i];

        for(j=0; j<3 ; j++){
            y=nums[j];
            if(x==y){
                continue;
            }
        
            for(k=0; k<3 ; k++){
                z=nums[k];
                
                if(x==y || y==z || z==x){
                    continue;
                }

                num = (100*x) + (10*y) + z;
                printf("%d\n", num);

            }


        }
    }

    return 0;
}
