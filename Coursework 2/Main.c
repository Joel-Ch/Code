#include <stdio.h>
#include "C:/Users/poely/Documents/Code/EEEE1040/Coursework 2/UserInput.h"
#include "C:/Users/poely/Documents/Code/EEEE1040/Coursework 2/Conversion.h"

void main()
{
    // convert to star(1) or delta(2)
    int functionChooser;
    // inputs and outputs of the converter
    float input1, input2, input3, output1, output2, output3, minimumValue = 1000, maximumValue = 1000000;

    // loop forever (until the code is exited)
    while (1)
    {

        // choose mode
        printf("Enter 1 to convert to star, 2 to convert to delta or 0 to exit\n");
        scanf("%i", &functionChooser);

        // check for valid input
        switch (functionChooser)
        {
        case 0:
            // entered 0
            printf("exiting");
            return;
            break;
        case 1:
            // case 1 and 2 are the same, so there is no break in between them
        case 2:
            printf("Please enter values as required:\n");
            printf("1: ");
            input1 = inputValue(minimumValue, maximumValue);
            // calling the inputValue function to ensure the value is usable
            printf("2: ");
            input2 = inputValue(minimumValue, maximumValue);
            printf("3: ");
            input3 = inputValue(minimumValue, maximumValue);

            // calls conversion function to convert between the two networks
            conversion(&output1, &output2, &output3, input1, input2, input3, functionChooser);

            // This section prints the outputs
            switch (functionChooser)
            {
            case 1:
                // adding a header to the table
                printf("Delta       Star\n");
                break;

            case 2:
                printf("Star        Delta\n");
                break;
            default:
                return;
                break;
            }

            // print out a table of results
            printf("%.2f      %.2f\n%.2f      %.2f\n%.2f      %.2f\n\n", input1, output1, input2, output2, input3, output3);
            break;

        default:
            // input wasn't 0,1 or 2
            printf("Please enter a valid input\n");
            break;
        }
    }
}