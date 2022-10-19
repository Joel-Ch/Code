#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  integer = 0;

	// Enter a value
    printf ("Enter an integer value\n");
    scanf ("%i", &integer);

	// A single line of code conditional on the value of a
	if ( integer>=0 && integer<=10)
    {
	    printf ("The integer is in range\n");    
    }
    else
    {
        printf ("The integer is not in range");
    }
    return 0;   // Exit from main
}