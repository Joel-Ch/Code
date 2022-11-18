#include <stdio.h>
#include <stdlib.h>

float inputValue(char *prompt, float minimum, float maximum)
{
    // input as a float
    float value;
    while (1)
    {
        // clear buffer
        fflush(stdin);
        // get user input
        puts(prompt);

        // scanf is embedded within the if statement to check that the output is numeric 
        // (the return value of scanf is 1 if the input is numeric or 0 if it's not)
        if (scanf("%f", &value) != 1)
            puts("error: value isn't a number");

        // check if too small
        else if (value < minimum)
        {
            puts("error: value too low");
        }

        // check if too big
        else if (value > maximum)
        {
            puts("error: value too high");
        }
        // success! return the user input to the main code
        else
        {
            printf("sucessfuly entered value %.2f\n", value);
            return value;
        }
    }
}
