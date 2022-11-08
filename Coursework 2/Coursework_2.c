#include <stdlib.h>
#include <stdio.h>


// to do: 
// why is it looping endlessly

// structure for storing all the numbers in
struct Values
{
    // delta value
    float r1;
    // delta value
    float r2;
    // delta value
    float r3;
    // star value
    float ra;
    // star value
    float rb;
    // star value
    float rc;
    // chooses whether to convert to star or delta
    int functionChooser;
};

// check that the inputs are valid
float inputValue()
{
    float value;

    // check if scanf returned a numeric value
    int scanfCheck;

    while (1)
    {
        scanfCheck = scanf("%f", &value);
        // this doesnt work!

        // check if numeric
        if (scanfCheck != 1)
        {
            printf("error: value not numeric\n");
        }

        // check if too small
        else if (value < 1000)
        {
            printf("error: value too low\n");
        }

        // check if too big
        else if (value > 1000000)
        {
            printf("error: value too high\n");
        }

        // success, returns to main code
        else
        {
            return (value);
        }
        
    }

}

void conversion(struct Values values)
{
    // variable to make calculations quicker
    float topOfDelta, bottomOfStar;

    switch (values.functionChooser)
    {
    case 1:
        // converting to star
        bottomOfStar = (values.ra + values.rb + values.rc);
        values.r1 = ((values.ra * values.rb) / bottomOfStar);
        values.r2 = ((values.ra * values.rc) / bottomOfStar);
        values.r3 = ((values.rb * values.rc) / bottomOfStar);
        break;
    case 2:
        // converting to delta
        topOfDelta = (values.r1 * values.r2) + (values.r2 * values.r3) + (values.r1 * values.r3);
        values.ra = (topOfDelta / (values.r3));
        values.rb = (topOfDelta / (values.r2));
        values.rc = (topOfDelta / (values.r1));
        break;

    default:
        break;
    }
    
    // print out the results
    printf("Results:\nR1 = %.2f\nR2 = %.2f\nR3 = %.2f\nRa = %.2f\nRb = %.2f\nRc = %.2f\n", values.r1, values.r2, values.r3, values.ra, values.rb, values.rc);
    
    return;
}


void main()
{

    // structure containing everything
    struct Values values;

    while (1)
    {

        // choose mode
        printf("Enter 1 to convert to star, 2 to convert to delta or 0 to exit\n");
        scanf("%i", &values.functionChooser);

        switch (values.functionChooser)
        {
        case 0:
            // entered 0
            printf("exiting");
            return;
            break;

        case 1:
            // converting to star
            printf("Please enter values as required:\n");
            printf("Ra:");
            values.ra = inputValue();
            printf("Rb:");
            values.rb = inputValue();
            printf("Rc:");
            values.rc = inputValue();

            conversion(values);
            break;

        case 2:
            // converting to delta
            printf("Please enter values as required:\n");
            printf("R1:");
            values.r1 = inputValue();
            printf("Rb:");
            values.r2 = inputValue();
            printf("Rc:");
            values.r3 = inputValue();

            conversion(values);
            break;

        default:
            printf("Please enter a valid input\n");
            break;
        }
    }
}