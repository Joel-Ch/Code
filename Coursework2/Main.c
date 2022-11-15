#include <stdio.h>
#include "UserInput.h"
#include "Conversion.h"

void displayOutputs(float in1, float in2, float in3, float out1, float out2, float out3, int chooser)
{
    // switch case to print the correct header
    switch (chooser)
    {
    case 1:
        printf("   Delta      Star\n");
        break;
    case 2:
        printf("   Star       Delta\n");
        break;
    }

    // print the table (the -11 appends to the left and ensures 11 characters are printed so the table is always aligned)
    printf("1: %-11.2f%-11.2f\n2: %-11.2f%-11.2f\n3: %-11.2f%-11.2f\n", in1, out1, in2, out2, in3, out3);
    return;
}

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
            input1 = inputValue("1: ", minimumValue, maximumValue);
            // calling the inputValue function to ensure the value is usable
            input2 = inputValue("2: ", minimumValue, maximumValue);
            input3 = inputValue("3: ", minimumValue, maximumValue);

            // calls conversion function to convert between the two networks
            conversion(&output1, &output2, &output3, input1, input2, input3, functionChooser);

            // calls display function to display the outputs
            displayOutputs(input1, input2, input3, output1, output2, output3, functionChooser);
            break;

        default:
            // input wasn't 0,1 or 2
            printf("Please enter a valid input\n");
            break;
        }
    }
}