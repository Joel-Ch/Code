#include <stdio.h>
#include <stdlib.h>
#include <math.h>

CalculateCoords(float r, float t, float *x, float *y)
{
    *x = r * cos(t);
    *y = r * sin(t);
}

int main()
{
    float r, t, x, y;
    printf("enter two non-integer values");
    scanf("%f %f", &r,&t);
    CalculateCoords(r, t, &x, &y);
    printf("Coords:\nX: %.2f Y:%.2f", x, y);
    return 0;
}