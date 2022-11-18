#include <stdio.h>

int DeltaStarConversion(float *output1, float *output2, float *output3,float input1,float input2,float input3, int starOrDelta)
{
    // checks conversion type
    switch (starOrDelta)
    {
    // converting to star
    case 1:
        // variable to make calculation easier
        float bottomOfStar = (input1 + input2 + input3);
        // doing the calculations
        *output1 = ((input1 * input2) / bottomOfStar);
        *output2 = ((input1 * input3) / bottomOfStar);
        *output3 = ((input2 * input3) / bottomOfStar);
        break;

    // converting to delta
    case 2:
        // variable to make calculation easier
        float topOfDelta = (input1 * input2) + (input2 * input3) + (input1 * input3);
        // doing the calculations
        *output1 = (topOfDelta / (input3));
        *output2 = (topOfDelta / (input2));
        *output3 = (topOfDelta / (input1));
        break;
    default:
        puts("error, invalid function chosen");
        return 1;
        break;
    }
    return 0;
}