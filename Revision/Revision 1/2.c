#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r1, r2, r3;
    printf("enter 3 resistor values");
    scanf("%f %f %f", &r1, &r2, &r3);
    printf("%f", (1 / ((1 / r1) + (1 / r2) + (1 / r3))));
    return 0;
}
