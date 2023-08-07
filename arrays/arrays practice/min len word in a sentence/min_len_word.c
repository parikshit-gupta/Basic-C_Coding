#include <stdio.h>

void min_len(char sen[], int len)
{
    int start = 0;
    int end = len - 1;
    int min = len - 1;
    int e = end;
    int s = start;
    int i = 0;
    while (sen[i] != '\0')
    {
        if (sen[i] == ' ')
        {
            end = i - 1;
            if (end - start < min)
            {
                min = end - start;
                e = end;
                s = start;
            }
            start = i + 1;
        }
        else if (sen[i + 1] == '\0')
        {
            end = i;
            if (end - start < min)
            {
                min = end - start;
                e = end;
                s = start;
            }
        }
        i++;
    }
    printf("the smallest word is: ");
    for (i = s; i <= e; i++)
    {
        printf("%c", sen[i]);
    }
}
int main()
{
    char sen[100];
    printf("enter the sentence: ");
    fgets(sen, sizeof(sen), stdin);
    int len = 0;
    while (sen[len] != '\0')
    {
        len++;
    }
    printf("lenght is: %d\n", len);
    min_len(sen, len);

    return 0;
}