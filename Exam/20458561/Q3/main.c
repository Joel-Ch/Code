#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CalculateCoords(float r, float t, float *x, float *y)
{
    *x = r * cos(t);
    *y = r * sin(t);//do calculations

    return;
}

int main()
{
    float r, t, x, y;
    printf("enter non-integer values for r and theta");
    scanf("%f %f", &r,&t);
    CalculateCoords(r, t, &x, &y);//provide addresses for the variables that need changing within the function
    printf("Coords:\nX: %.2f Y:%.2f", x, y);//print results
    return 0;
}
