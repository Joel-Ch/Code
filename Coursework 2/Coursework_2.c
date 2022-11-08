#include <stdlib.h>
#include <stdio.h>


// to do: 
// add error checking
// understand task Cb. (^ These might be the same task)

// structure for storing all the numbers in
struct Values
{
    float r1;
    float r2;
    float r3;
    float ra;
    float rb;
    float rc;
    int functionChooser;
};

// check that the inputs are valid
float inputValue(){
    float value;

    // check if scanf returned a numeric value
    int scanfCheck;

    while (true)
    {
        scanfCheck = scanf("%f", &value);
        // this doesnt work!

        // check if numeric
        if (scanfCheck != 1)
        {
            printf("\nerror: value not numeric");
        }

        // check if too small
        else if (value < 1000)
        {
            printf("\nerror: value too low");
        }

        // check if too big
        else if (value > 1000000)
        {
            printf("\nerror: value too high");
            return 0;
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


void main() {

    // call the struct
    struct Values values;

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
        scanf("%f", &values.r1);
        printf("R2:");
        scanf("%f", &values.r2);
        printf("R3:");
        scanf("%f", &values.r3);

        conversion(values);
        break;

    default:
        break;
    }
    
    printf("Running again:\n");
    
    // repeats until 0 is entered
    main();
}