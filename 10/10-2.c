#include <stdio.h>
#include <stdlib.h>

// Function to calculate the volume of a cylinder
float ConvertToRadians ( float d)
{
	// Calculate  \& return value
	float Result;
	Result = ((3.14159265 * d) / 180);
	return (Result);
}


int main(void)
{
    // Declare variables
    float Radians, d;

    // Obtain values
    printf("\nPlease enter the number in degrees\n");
    scanf("%f", &d);

    // Get and display the value in radians
    printf ("\nThe value in radians is %f", ConvertToRadians(d));

    return 0;
}