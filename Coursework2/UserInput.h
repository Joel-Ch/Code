#include <stdio.h>
#include <stdlib.h>

float inputValue(char *prompt, float minimum, float maximum)
{
    // input as a float
    float value;
    int inputAmount;
    while (1)
    {
        puts(prompt);
        fflush(stdin);
        inputAmount = scanf("%f", &value);

        if (inputAmount != 1)
            printf("error: value isn't a number\n");

        // check if too small
        else if (value < minimum)
        {
            printf("error: value too low\n");
        }

        // check if too big
        else if (value > maximum)
        {
            printf("error: value too high\n");
        }
        else
        {
            printf("value entered\n");
            return value;
        }
    }
}
