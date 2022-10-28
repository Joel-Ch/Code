#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r = 4,V = 0,A = 0;

    printf("Enter the radius\n");
    scanf("%f",&r);

    V = (4/3)*M_PI*r*r*r;
    A = 4*M_PI*r*r;

    printf("The volume is %.2f and the surface area is %.2f", V, A);

    return 0;
}
