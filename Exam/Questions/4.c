#include <stdio.h>
#include <stdlib.h>

int InputValue(char *prompt)
{
    // input as a float
    int value;
    while (1)
    {
        // clear buffer
        fflush(stdin);
        // get user input
        puts(prompt);
        // scanf is embedded within the if statement to check that the output is numeric
        // (the return value of scanf is 1 if the input is numeric or 0 if it's not)
        if (scanf("%i", &value) != 1)
            puts("error: value isn't a number");
        else if (value <= 0)
        {
            puts("error: value isn't greater than zero");
        }
        // success! return the user input to the main code
        else
        {
            printf("successfully entered value %s%i\n", prompt, value);
            return value;
        }
    }
}

int main()
{
    int year = InputValue("A year in which a person was born:");
    if (year >= 1901 && year <= 1924)
        printf("G.I. Generation");
    else if (year >= 1925 && year <= 1945)
        printf("Silent Generation");
    else if (year >= 1946 && year <= 1964)
        printf("Baby Boomer");
    else if (year >= 1965 && year <= 1980)
        printf("Generation X");
    else if (year >= 1981 && year <= 1996)
        printf("Generation Y");
    else if (year >= 1997 && year <= 2012)
        printf("Generation Z");
    else if (year >= 2013 && year <= 2025)
        printf("Generation Alpha");
    else
        printf("error: year out of range");
    return 0;
}