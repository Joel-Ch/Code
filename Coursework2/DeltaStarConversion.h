#include <stdio.h>

int DeltaStarConversion(float *output1, float *output2, float *output3,float input1,float input2,float input3, int starOrDelta)
{
    // checks conversion type
    switch (starOrDelta)
    {
    // converting to star
    case 1:
        // doing the calculations
        *output1 = ((input1 * input2) / (input1 + input2 + input3));
        *output2 = ((input1 * input3) / (input1 + input2 + input3));
        *output3 = ((input2 * input3) / (input1 + input2 + input3));
        break;

    // converting to delta
    case 2:
        // doing the calculations
        *output1 = (((input1 * input2) + (input2 * input3) + (input1 * input3)) / (input3));
        *output2 = (((input1 * input2) + (input2 * input3) + (input1 * input3)) / (input2));
        *output3 = (((input1 * input2) + (input2 * input3) + (input1 * input3)) / (input1));
        break;
    default:
        puts("error, invalid function chosen");
        return 1;
        break;
    }
    return 0;
}