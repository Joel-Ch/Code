#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float rads = 0;
    printf("Angle Sin  Cos  Tan\n");
    for (size_t i = 0; i <= 45; i += 5)
    {
        rads = (i * (3.1415926/180));
        printf("%2d    %.2f %.2f %.2f\n", i, sin(rads), cos(rads), tan(rads));
    }
    
    return 0;
}
