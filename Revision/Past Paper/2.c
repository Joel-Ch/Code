#include <stdio.h>

float calculateVolume(float h,float w,float b1,float b2)
{
    return ((w / 2) * h * (b1 + b2));
}

void main()
{
    float h, w, b1, b2, volume;
    printf("enter values for h, w, b1 and b2");
    scanf("%f %f %f %f", &h, &w, &b1, &b2);
    printf("%.2f", calculateVolume(h, w, b1, b2));
    return;
}