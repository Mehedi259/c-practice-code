#include <stdio.h>

int main()
{
    int n,x;
    printf("kotor namta dekhte cas?\n");
    scanf("%d", &x);
    printf("koto porjonto namta dekhte cas?\n");
    scanf("%d", &n);
    printf("********namtar cart*******\n\n\n");
    for (int i = 0; i <= n; i++)
    {

        printf("%d * %d = %d \n",x, i, i * x);
    }
    return 0;
}