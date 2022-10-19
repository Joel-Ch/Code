#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FindTrigValues(float rads, float *Sine, float *Cosine, float *Tangent)
{
    *Sine = (sin(rads));
    *Cosine = (cos(rads));
    *Tangent = (tan(rads));
    // calculate values and store in memory locations

    return 0;
}

float ConvertToRadians(float d)
{
    // Calculate  \& return value
    float Result;
    Result = ((3.14159265 * d) / 180);
    return (Result);
}

int main(void)
{
    float radians, Sine, Cosine, Tangent;
    int MinimumDegrees, MaximumDegrees, degrees;
    // Declare variables

    printf("Enter a value in degrees\n");
    scanf("%i", &degrees);
    // Enter values

    radians = ConvertToRadians(degrees);

    FindTrigValues(radians, &Sine, &Cosine, &Tangent);

    printf("\nRadians = %f\nSine = %f\nCosine = %f\nTangent = %f", radians, Sine, Cosine, Tangent);
        

    return 0;
}