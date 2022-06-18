#include <stdio.h>
int main(void)
{
    float inch;

    printf("inch -> cm converter\n########\n");
    printf("inch: ");
    scanf("%f", &inch);
    printf("%f inch is %f cm.\n", inch, inch*2.54);
}