#include <stdio.h>
#include <math.h>

void calculatePolarCoords(float x,float y,float *r,float *t)
{
    *r = sqrt((x * x) + (y * y));
    *t = atan(y / x);
    
    return;
}

void main()
{
    float x, y, r, t;
    printf("enter 2 non-integer values");
    scanf("%f %f", &x, &y);
    calculatePolarCoords(x, y, &r, &t);
    printf("r %.2f theta %.2f", r, t);

    return;
}