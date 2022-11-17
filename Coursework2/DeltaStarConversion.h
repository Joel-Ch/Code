#include <stdio.h>

int DeltaStarConversion(float *output1, float *output2, float *output3,float input1,float input2,float input3, int functionChooser)
{
    // variables to make calculations quicker
    float topOfDelta, bottomOfStar;

    // checks conversion type
    switch (functionChooser)
    {
    case 1:
        // converting to star
        bottomOfStar = (input1 + input2 + input3);
        *output1 = ((input1 * input2) / bottomOfStar);
        *output2 = ((input1 * input3) / bottomOfStar);
        *output3 = ((input2 * input3) / bottomOfStar);
        break;
    case 2:
        // converting to delta
        topOfDelta = (input1 * input2) + (input2 * input3) + (input1 * input3);
        *output1 = (topOfDelta / (input3));
        *output2 = (topOfDelta / (input2));
        *output3 = (topOfDelta / (input1));
        break;
    default:
        break;
    }
    return 0;
}