#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, k;
    char ch;
    char a[100];
    for (i = 0; i <= j; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        else
        {
            j += 1;

            a[i] = ch;
        }
    }
    for (k = 0; k < j; k++)
    {
        printf("%c", a[k]);
    }
}