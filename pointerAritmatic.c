#include <stdio.h>

int main()
{
    int i = 18;
    int *ptr = &i;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the secend location is %u", ptr);
    return 0;
}