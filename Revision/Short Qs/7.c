#include <stdio.h>
#include <math.h>

float calcArea(float a, float b, float c)
{
    float p = ((a + b + c) / 2);
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
}

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("enter 3 values");
    scanf("%f %f %f", &a, &b, &c);
    printf("%f", calcArea(a, b, c));
    return 0;
}
