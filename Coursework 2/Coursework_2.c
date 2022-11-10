#include <stdlib.h>
#include <stdio.h>



// to do: 
// why is it looping endlessly

// structure for storing all the numbers in
struct Values
{
    // first input
    float input1;
    // second input
    float input2;
    // third input
    float input3;
    // first output
    float output1;
    // second output
    float output2;
    // third output
    float output3;
    // chooses whether to convert to star or delta
    int functionChooser;
};

// check that the inputs are valid
double inputValue()
{
    // input as a character (to stop scanf doing weird stuff)
    char value[20];

    while (1)
    {
        scanf("%s", &value);
        // check if numeric
        if (atof(value) == 0)
        {
            printf("error: invalid input\n");
        }

        // check if too small
        else if (atof(value) < 1000)
        {
            printf("error: value too low\n");
        }

        // check if too big
        else if (atof(value) > 1000000)
        {
            printf("error: value too high\n");
        }

        // success, returns to main code
        else
        {
            return (atof(value));
        }
        
    }

}

void conversion(struct Values *values)
{
    // variable to make calculations quicker
    float topOfDelta, bottomOfStar;

    // checks conversion type
    switch (values->functionChooser)
    {
    case 1:
        // converting to star
        bottomOfStar = (values->input1 + values->input2 + values->input3);
        values->output1 = ((values->input1 * values->input2) / bottomOfStar);
        values->output2 = ((values->input1 * values->input3) / bottomOfStar);
        values->output3 = ((values->input2 * values->input3) / bottomOfStar);
        break;
    case 2:
        // converting to delta
        topOfDelta = (values->input1 * values->input2) + (values->input2 * values->input3) + (values->input1 * values->input3);
        values->output1 = (topOfDelta / (values->input3));
        values->output2 = (topOfDelta / (values->input2));
        values->output3 = (topOfDelta / (values->input1));
        break;

    default:
        break;
    }

    return;
}

void displayValues(struct Values values)
{
    // switch case to add the correct header
    switch (values.functionChooser)
    {
    case 1:
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
    printf("%.2f      %.2f\n%.2f      %.2f\n%.2f      %.2f\n\n", values.input1, values.output1, values.input2, values.output2, values.input3, values.output3);
}


void main()
{

    // structure containing everything
    struct Values values;

    // loop forever (until the code is exited)
    while (1)
    {

        // choose mode
        printf("Enter 1 to convert to star, 2 to convert to delta or 0 to exit\n");
        scanf("%i", &values.functionChooser);

        // check for valid input
        switch (values.functionChooser)
        {
        case 0:
            // entered 0
            printf("exiting");
            return;
            break;
        case 1:
        case 2:
            printf("Please enter values as required:\n");
            printf("1: ");
            values.input1 = inputValue();
            printf("2: ");
            values.input2 = inputValue();
            printf("3: ");
            values.input3 = inputValue();

            // builds the outputs
            conversion(&values);

            // displays the inputs and outputs
            displayValues(values);
            break;

        default:
            // input wasn't 0,1 or 2
            printf("Please enter a valid input\n");
            break;
        }
    }
}