#include <stdio.h>

float gain(float R1, float R2)
{
    return ((R1 + R2) / R1);
}

int main(int argc, char const *argv[])
{
    float R1, R2;
    printf("enter values for r1 and r2");
    scanf("%f %f", &R1, &R2);
    printf("%f", gain(R1, R2));
    return 0;
}
