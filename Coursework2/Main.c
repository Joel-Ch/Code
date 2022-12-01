#include <stdio.h>
#include "UserInput.h"
#include "DeltaStarConversion.h"
// includes for the header files

int displayOutputs(float in1, float in2, float in3, float out1, float out2, float out3, int chooser)
{
    // switch case to print the correct header
    switch (chooser)
    {
    case 1:
        puts("   Delta      Star");
        break;
    case 2:
        puts("   Star       Delta");
        break;
    }

    // print the table (the -11 appends to the left and ensures 11 characters are printed so the table is always aligned)
    printf("1: %-11.2f%-11.2f\n2: %-11.2f%-11.2f\n3: %-11.2f%-11.2f\n", in1, out1, in2, out2, in3, out3);
    return 0;
}

int main()
{
    // convert to star(1) or delta(2)
    int starOrDelta;
    // inputs and outputs of the converter
    float input1, input2, input3, output1, output2, output3;
    // set maximum and minimum values
    float minimumValue = 1000, maximumValue = 1000000;

    // ensures the minimum value is lower than the maximum (just in case)
    if (minimumValue > maximumValue)
    {
        puts("error: maximum value is less than minimum value, exiting");
        return 0;
    }

    // loop forever (until the code is exited)
    while (1)
    {
        // clear the input buffer
        fflush(stdin);

        // choose mode
        puts("Enter 1 to convert to star, 2 to convert to delta or 0 to exit");
        scanf("%d", &starOrDelta);

        // check for valid input
        switch (starOrDelta)
        {
        case 0:
            // entered 0
            puts("exiting");
            return 0;
            break;
        case 1:
            // case 1 and 2 are the same, so there is no break in between them
        case 2:
            puts("Please enter values as required:");
            // calling the inputValue function to ensure the value is usable
            input1 = inputValue("1: ", minimumValue, maximumValue);
            input2 = inputValue("2: ", minimumValue, maximumValue);
            input3 = inputValue("3: ", minimumValue, maximumValue);

                // checks the conversion function worked
                if (DeltaStarConversion(&output1, &output2, &output3, input1, input2, input3, starOrDelta) != 0)
            {
                puts("error converting values, exiting");
                return 0;
            }
            // checks the display function worked
            if (displayOutputs(input1, input2, input3, output1, output2, output3, starOrDelta) != 0)
            {
                puts("error displaying values, exiting");
                return 0;
            }
            
            break;

        default:
            // input wasn't 0,1 or 2
            puts("Please enter a valid input");
            break;
        }
    }
}