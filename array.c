#include <stdio.h>
void add_student();
int main()
{
    add_student();
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    char e[100];

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%s\n", d);
    printf("%s\n", e);
}
void add_student()
{
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    char e[100];
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("Enter the second string: ");
    scanf("%s", b);
    printf("enter the third string: ");
    scanf("%s", c);
    printf("enter the fourth string: ");
    scanf("%s", d);
    printf("enter the fifth string: ");
    scanf("%s", e);
    return;
}