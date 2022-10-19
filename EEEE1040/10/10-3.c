#include <stdio.h>
#include <stdlib.h>

float ConvertToRadians ( float d)
{
	// Calculate  \& return value
	float Result;
	Result = ((3.14159265 * d) / 180);
	return (Result);
}

int main(void)
{
	float num, max, num2 = 0;

    printf("\n Please enter the minimum value\n");
    scanf("%f", &num);

    printf("\n Please enter the maximum value\n");
    scanf("%f", &max);

    if( num <= max)
    {
        do 
        {
            printf ("\n%f", num);
            num2 = ConvertToRadians(num);
            printf ("\nIn Radians: %f", num2);
            num += 1;
        }
        while ( num <= max);
    }
    return 0;
}