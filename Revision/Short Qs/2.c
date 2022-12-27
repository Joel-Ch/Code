#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, A, s;
    printf("enter a b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    s = ((a + b + c) / 2);
    A = sqrt(s*(s - a)*(s - b)*(s - c));
    printf("%f", A);
    return 0;
}
