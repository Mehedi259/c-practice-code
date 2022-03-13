#include <stdio.h>

int main()
{
    int i = 18;
    int *ptr = &i;
    chr c = 21;
    chr *plo = &c;
    printf("the value of ptr is %u\n", ptr);
    ptr++;
    printf("the secend location is %u\n", ptr);
    printf("the value of plo is %u"\n, plo);
    plo++;
    printf("the secend value of plo is %u\n", plo);
    return 0;
}
