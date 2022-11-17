#include <stdio.h>
#include "DeltaStarConversion.h"
int main(int argc, char const *argv[])
{
    // declare variables
    float in1, in2, in3, out1, out2, out3;
    int functionChooser;

    // add input values
    in1 = 2000;
    in2 = 5000;
    in3 = 7000;

    // choose whether 1 for delta or 2 for star
    functionChooser = 1;

    // run command
    DeltaStarConversion(&out1, &out2, &out3, in1, in2, in3, functionChooser);

    // print outputs
    printf("Outputs are %f, %f, %f", out1, out2, out3);

    return 0;
}

#include "UserInput.h"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // declare variable
    float input, maximumValue, minimumValue;

    // set maximum and minimum values
    maximumValue = 1000000;
    minimumValue = 1000;

    // run command
    input = inputValue("Please enter a value", minimumValue, maximumValue);

    // print output
    printf("Value entered is %f", input);

    return 0;
}
