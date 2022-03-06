#include <stdio.h>

int main()
{
    int length, bredth, area;
    printf("enter the value of length \n");
    scanf("%d", &length);
    printf("enter the value of bredth \n");
    scanf("%d", &bredth);
    area = length * bredth;
    printf("you rectengle area is %d squre unit.", area);
    return 0;
}