#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 100, b = 30;

    printf(" print the value of a+b is %d\n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return (a + b);
}