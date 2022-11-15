#include <stdio.h>
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

int main(int argc, char const *argv[])
{
    int functionChooser;
    // inputs and outputs of the converter
    float input1, input2, input3, output1, output2, output3, minimumValue = 1000, maximumValue = 1000000;

    if (argc != 5)
    {
        printf("\nProgram use %s <conversiontype> <input1> <input2> <input3>", argv[0]);
        exit(0);
    }
    sscanf(argv[1], "%d", &functionChooser);
    sscanf(argv[2], "%f", &input1);
    sscanf(argv[3], "%f", &input2);
    sscanf(argv[4], "%f", &input3);


    // check for valid input
    switch (functionChooser)
    {
    case 0:
        // entered 0
        printf("exiting");
        return 0;
        break;
    case 1:
    // case 1 and 2 are the same, so there is no break in between them
    case 2:
        conversion(&output1, &output2, &output3, input1, input2, input3, functionChooser);
        // calls display function to display the outputs
        displayOutputs(input1, input2, input3, output1, output2, output3, functionChooser);
        break;

    default:
        // input wasn't 0,1 or 2
        printf("error: <conversiontype> should be 1 to convert to star, 2 to convert to delta or 0 to exit\n");
        break;
    }
}