#include <stdio.h>
#include <stdlib.h>

float convertToCAD(int pence)
{
    float CAD = ((float)pence / 100) * 1.6804;
    return CAD;
}

int main(int argc, char const *argv[])
{
    int min, max;
    float CAD;
    printf("enter 2 integers");
    scanf("%i %i", &min, &max);
    for (size_t i = min; i < max; i++)
    {
        CAD = convertToCAD(i);
        printf("%i %.2f\n", i, CAD);
    }
    
    return 0;
}
