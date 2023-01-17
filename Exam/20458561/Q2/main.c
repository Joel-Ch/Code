#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float CalculateArea(float a, float b, float c)
{
    float S = (a + b + c) / 2;//do the calculation
    return (sqrt(S * (S - a) * (S - b) * (S - c)));
}

float InputValue(char *prompt)//input function (rejecting invalid inputs)
{
    // input as a float
    float value;
    while (1)
    {
        // clear buffer
        fflush(stdin);
        // get user input
        puts(prompt);
        // scanf is embedded within the if statement to check that the output is numeric
        // (the return value of scanf is 1 if the input is numeric or 0 if it's not)
        if (scanf("%f", &value) != 1)
            puts("error: value isn't a number");
        else if (value <= 0)
        {
            puts("error: value isn't greater than zero");
        }
        // success! return the user input to the main code
        else
        {
            printf("successfully entered value %s%.2f\n", prompt, value);
            return value;
        }
    }
}

int main()
{
    float a, b, c;
    puts("Please enter side lengths");
    a = InputValue("A:");
    b = InputValue("B:");
    c = InputValue("C:");
    printf("Area of triangle is %.2f", CalculateArea(a, b, c));//call function within printf
    return 0;
}
