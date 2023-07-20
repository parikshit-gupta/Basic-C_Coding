#include <stdio.h>

void rev_wordwise(char str[])
{
    //finding the charecter lenght of the string
    int c = 0;
    for (int i = 0; (str[i]) != '\0'; i++)
    {
        c = c + 1;
    }
    int i = 0;
    char str2[1000];

    // reversed string
    for (i = 0; i <=c; i++)
    {
        str2[i] = str[c - 1 - i];
        if (i==c)
        {
            str2[i]=' ';
            str2[i+1]='\0';
        }
    }
    printf("str2: %s\n", str2);

    // wordwise reverse
    int k = -1;
    int k1 = -1;
    int j;
    for (i = 0; i <= c; i++)
    {

        if (str2[i] == ' ')
        {
            k1 = k;
            k = i;
            
            for (j = k1 + 1; j < k; j++)
            {
                str[j] = str2[k + k1 - j];
            }
            str[k]=' ';
        }
        
    }
    // printing the required string
    printf("the required string is: %s", str);
}

int main()
{

    char str2[1000] = "hello this is parikshiet here what are you upto right now";
    rev_wordwise(str2);
    return 0;
}

/*void rev_wordwise(char str[], int words)
{
    // finding charecterwise lenght
    int c = 0;
    for (int i = 0; (str[i]) != '\0'; i++)
    {
        c = c + 1;
    }
    char str1[100][100]; // str[row(j)][column(i)]
    int i=0;
    int j=0;

    //making 2-D string with " " delimiter
    int k=0;
    for (j = 0; j < words; j++)
    {
        for (i = k; i < c; i++)
        {
            str1[j][i-k] = str[i];
            if (str[i] == ' ')
            {
                k=i+1;
                break;
            }
        }
    }

    // printing the 2-d string
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < c; i++)
        {

            if(str1[j][i]=='\0')
            {
                str1[j][i]=',';
            }
            printf("%c", str1[j][i]);
        }
    }

    //reversing the 2-D string
    int l=5;
    j=0;
    while(j<l)
    {
    }
*/
