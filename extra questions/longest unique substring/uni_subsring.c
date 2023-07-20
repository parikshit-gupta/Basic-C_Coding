#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char b[] = "aacbbcgetrrkjzzl";
    int n = strlen(b);
    int i = 0;
    int c = 0;
    int k = 0;
    char arr1[100];
    char arr2[100];
    for (i = 0; i < n; i++)
    {
        {
            if (b[i] == b[i + 1] && b[i - 1] == b[i])
            {
                continue;
            }
            else if (b[i] != b[i + 1] && b[i - 1] == b[i])
            {
                c = i;
                arr1[i - c] = b[i];
            }
            else if (b[i] == b[i + 1] && b[i - 1] != b[i])
            {
                k = i;
                arr1[i - c] = b[i];
                char arr2 = arr1;
            }
            else if (b[i] != b[i + 1] && b[i - 1] != b[i])
            {
                arr1[i - c] = b[i];
            }
        }
    }

    return 0;
}
