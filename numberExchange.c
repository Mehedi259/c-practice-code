#include <stdio.h>
void wrongExchange(int a, int b);
void Exchange(int *a, int *b);
int main()
{
    int a = 5, b = 6;
    printf("the previous value is %d\n  %d\n", a, b);
    Exchange(&a, &b);
    printf("the after value is %d\n  %d\n", a, b);

    return 0;
}
void wrongExchange(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
