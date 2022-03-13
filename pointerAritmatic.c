#include <stdio.h>

int main()
{
    int i = 18;
    int *ptr = &i;
    char c = 21;
    char *plo = &c;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the secend location is %u\n", ptr);
    printf("the value of plo is %u\n", plo);
    plo++;
    printf("the secend value of plo is %u\n", plo);
    return 0;
}
