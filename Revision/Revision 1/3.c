#include <stdio.h>
#include <math.h>

void calculate(float v, float t, float *r, float *i)
{
    *r = v * cos(t);
    *i = v * sin(t);
}

int main(int argc, char const *argv[])
{
    float v, t,r,i;
    printf("Please enter voltage and angle");
    scanf("%f %f", &v, &t);
    calculate(v, t, &r, &i);
    printf("Vr: %f Vi: %f", r, i);
    return 0;
}
