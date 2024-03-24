
/*#include <stdio.h>
int main()
{

    char array[50]; // Define a character array to store the input

    printf("Enter a string: ");
    scanf("%s", array); // Use %s to read a string input

    printf("You entered: %s\n", array);

    return 0;
}
*/
/*
#include <stdio.h>
void fn();
int main()
{
    fn();
}
void fn()
{
    char c;
    if ((c = getchar()) != '\n')
    {
        fn();
    }
    printf("%c", c);
    return;
}
*/
/*
#include <stdio.h>

void fn();

int main()
{
    fn();
    return 0;
}

void fn()
{
    char c;
    if ((c = getchar()) != EOF)
    {
        printf("%c", c); // Print the character as it is read
        if (c != '\n')
        {
            fn(); // Call fn() recursively if it's not a newline character
        }
    }

}
*/
/*
#include <stdio.h>
int main()
{
    int i;
    char ch;
    char a[5];
    for (i = 0; i < 5; i++)
    {
        ch = getchar();

        a[i] = ch;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
}
*/

#include <stdio.h>
int main()
{
    int i;
    char ch;
    char a[100];

    do
    {

        ch = getchar();

        a[i] = ch;
    } while (ch != '\n');

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%c", a[i]);
    }
}
