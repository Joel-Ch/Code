#include <stdio.h>
#include <stdlib.h>

float ConvertToRadians(float deg)
    return (deg*(3.14159265/180));


int main()
{
    int start, end, a;
    printf("enter two integer values");
    scanf("%i %i", &start, &end);
    if (end<start)
    {
        for (size_t i = start; i >= end; i--)
        {
            printf("%i %.2f\n", i, ConvertToRadians(i));
        }
    }
    else if (start<end)
    {
        for (size_t i = start; i <= end; i++)
        {
            printf("Degrees: %i Radians: %.2f\n", i, ConvertToRadians(i));
        }
    }
    else if (start == end)
    {
        printf("Degrees: %i Radians: %.2f\n", start, ConvertToRadians(start));
    }
    
    return 0;
}