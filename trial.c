
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
    int count, i, j;
    char ch;
    char a[count];
    // for (i = 0; i < 50; i++)
    //{
    //    ch = getchar();
    //     a[i] = ch;
    //     if (ch == '\n')
    //         break;
    // }
    do
    {
        ch = getchar();
        count += 1;
    } while (ch != '\n');
    for (j = 0; j <= count; j++)
    {
        a[count] = ch;
    }
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%c", a[i]);
    }
}
*/
/*
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
        ch++;
    } while (ch != '\n');

    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%c", a[i]);
    }
}
*/

/*
#include <stdio.h>
int main()
{
    char c;
    int count;
    char arr[50];
    c = getchar();
    count = 0;
    while (c != EOF)
    {
        arr[count] = c;
        ++count;
    }
}
*/
/*
#include <stdio.h>
int main()
{
    int i, j = 0, k;
    char ch;
    char a[j];
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
*/
/*
#include <stdio.h>
int main()
{
    int i = 0;
    char a[i];
    char ch;
    int j;
    while (ch = getchar())
    {
        if (ch == '\n')
            break;
        else
        {
            i += 1;
            a[i] = ch;
        }
    }
    // for (j = 0; j < i; j++)
    //{
    printf("%c", a[i]);
    //}
}
*/
/*
#include <stdio.h>

int main()
{
    int i = 0, j = 0, k;
    char ch;

    printf("Enter a string: ");

    // Define the array after j has a proper value
    char a[100]; // Assuming a maximum length of 100 characters

    // Read characters until newline is encountered
    while ((ch = getchar()) != '\n')
    {
        a[j++] = ch;
    }

    // Print the characters
    for (k = 0; k < j; k++)
    {
        printf("%c", a[k]);
    }

    return 0;
}
*/
#include <stdio.h>
void add_student(char add[], int j);
void input(char a[], int j);
int main()
{
}
void add_student(char add[], int j)
{
    int k;
    char student_id[100], name[100], address[100], phone_number[100], email[100], date_of_birth[100];
    printf("Enter your student id:");
    input(student_id);
    for (k = 0; k < j; k++)
    {
        printf("%c", student_id[k]);
    }
}
void input(char a[], int j)
{
    int i, j = 0, k;
    char ch;
    // char[100];
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
    // for (k = 0; k < j; k++)
    // {
    //     printf("%c", a[k]);
    // }
    return;
}
