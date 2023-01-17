#include <stdio.h>

int main(int argc, char const *argv[])
{
    float I, r, R;
    printf("enter current and two resistances");
    scanf("%f %f %f", &I, &r, &R);
    printf("%f", (I * (r + R)));
    return 0;
}
