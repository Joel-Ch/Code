#include <stdio.h>
#include <stdlib.h>

float ConvertToRadians(float deg)
{//converting to radians
    return (deg*(3.14159265/180));
}


int main()
{
    int start, end;
    printf("enter two integer values");
    scanf("%i %i", &start, &end);
    if (end<start)
    {
        for (int i = start; i >= end; i--)//if 2nd value is less than first (counting backwards)
        {
            printf("%i %.2f\n", i, ConvertToRadians(i));
        }
    }
    else if (start<end)
    {
        for (int i = start; i <= end; i++)//if 2nd value is more than first (counting forwards)
        {
            printf("Degrees: %i Radians: %.2f\n", i, ConvertToRadians(i));
        }
    }
    else if (start == end)//if 2nd value is equal to first (not counting)
    {
        printf("Degrees: %i Radians: %.2f\n", start, ConvertToRadians(start));
    }

    return 0;
}
