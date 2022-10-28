#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, d, x1, x2;


    printf("Please enter your values for a, b and c, pressing enter after each\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("working with %f, %f, %f", a, b,c );

    d = b*b - 4*a*c;

    printf("\nDiscriminant = %.3f\n", d);

    if(d<0)
    {
        printf("No real roots");
    }
    else if(d==0)
    {
        x1 = ((-b+sqrt(d))/(2*a));
        printf("One solution: %.3f", x1);
    }
    else if(d>0)
    {
        x1 = ((-b+sqrt(d))/(2*a));
        x2 = ((-b-sqrt(d))/(2*a));
        printf("Two solutions: %.3f, %.3f", x1, x2);

    }
      

    return 0;
}