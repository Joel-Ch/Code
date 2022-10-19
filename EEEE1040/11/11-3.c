#include <stdio.h>
#include <stdlib.h>

// Function to calculate the volume of a cylinder
float ConvertToRadians(float d)
{
    // Calculate  \& return value
    float Result = ((3.14159265 * d) / 180);
    return (Result);
}

int main(void) // Main : Execution starts here...
{
    // Declare variables - pre-populate the array
    float Ages[90];
    int i;

    for (i = 0; i < 90; i++)
    // Populate the array "Ages"
    {
        Ages[i] = ConvertToRadians(i);
    }

    // Print out the array 1 by 1
    for (i = 0; i < 90; i++)
    {
        printf("Item %d contains value %f\n", i, Ages[i]);
    }

    // Exit the application
    return 0;
}

// note for future me: removing line 25 makes the array be constantly 0, it then seems to reset itself and i dont know why
