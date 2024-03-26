#include <stdio.h>
void func();
void func2();
int main()
{
    func2();
    return 0;
}

void func()
{
    char c[25];
    int i;
    if ((c[i] = getchar()) != '\n')
    {
        printf("%c", c);
        func();
    }

    return;
}
void func2()
{
    printf("enter ur id");
    func();
}