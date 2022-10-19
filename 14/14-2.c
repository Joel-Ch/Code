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

    printf("Enter the minimum value in degrees\n");
    scanf("%i", &MinimumDegrees);
    printf("Enter the maximum value in degrees\n");
    scanf("%i", &MaximumDegrees);
    // Enter values

    printf("Degs  Rads   Sine   Cos    Tan");

    for(degrees = MinimumDegrees ; degrees <= MaximumDegrees ; degrees++)
    {
        radians = ConvertToRadians(degrees);

        FindTrigValues(radians, &Sine, &Cosine, &Tangent);
        // Call the functions to get the values
        // printf("%f", Sine);

        printf("\n%i    %.3f  %.3f  %.3f  %.3f", degrees, radians, Sine, Cosine, Tangent);
    }
        

    return 0;
}