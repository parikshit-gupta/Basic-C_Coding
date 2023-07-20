#include<stdio.h>
#include<string.h>

void str_prefix(char str[])
{
    int c =strlen(str);
    char str2[100];
    int i,j=0;
    for (j=1; j<=c;j++)
    {
        for (i=0; i<j; i++)
        {
            str2[i]=str[i];
        }
        str2[j]='\0';
        printf("%d) : %s\n", j,str2);
    }

}


int main()
{
    char str1[100]="parikshiet gupta";
    str_prefix(str1);
    return 0;
}
