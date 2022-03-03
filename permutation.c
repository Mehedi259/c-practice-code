#include <stdio.h>

int main()
{
    int i, number, fact = 1;
    printf("enter your number\n");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("ans is %d", fact);
    return 0;
}