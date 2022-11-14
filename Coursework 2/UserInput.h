#include <stdio.h>
#include <stdlib.h>

float inputValue(float minimum, float maximum)
{
    // input as a character (to stop scanf doing weird stuff)
    char value[20];

    while (1)
    {
        scanf("%s", &value);
        // check if numeric
        if (atof(value) == 0)
        {
            printf("error: invalid input\n");
        }

        // check if too small
        else if (atof(value) < minimum)
        {
            printf("error: value too low\n");
        }

        // check if too big
        else if (atof(value) > maximum)
        {
            printf("error: value too high\n");
        }

        // success, returns to main code
        else
        {
            return (atof(value));
        }
    }
}
