#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r1, r2, g, i, o;
    printf("enter R1 and R2");
    scanf("%f %f", &r1, &r2);
    g = (r1 + r2) / r1;
    printf("gain is %f\nplease enter Vin", g);
    scanf("%f", &i);
    o = i * g;
    if (o>10)
    {
        printf("Overflow\nVout = 10V");
    }
    else
        printf("Vout = %f", o);
    
    return 0;
}
