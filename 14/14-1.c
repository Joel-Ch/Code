#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CalculatePolarCoordinates(float x ,float y ,float *r ,float *theta)
{
    *r = sqrt(x*x + y*y);
    *theta = atan(y/x);
    return 0;
}



int main(void)
{
    float x , y , r , theta;
// Declare variables

    printf("Enter values for x & y\n");
    printf("x = ");
    scanf("%f", &x);
    printf("y = ");
    scanf("%f", &y);
// Enter values into x and y


    CalculatePolarCoordinates(x , y , &r , &theta);
// Call the function to get the values

    printf("The polar coordinates are\nr = %f\nTheta = %f", r , theta);
    return 0;
}