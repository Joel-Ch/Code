#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  integer = 0;

	// Enter a value
    printf ("Enter an integer value\n");
    scanf ("%i", &integer);

	if (integer<=5)
    {
	    printf ("Still a baby");    
    }
    else if (integer>5 && integer<=12)
    {
        printf("The junior years");
    }
    else if (integer>12 && integer<20)
    {
        printf("Teenage Years");
    }
    else if (integer>=20)
    {
        printf("Downhill all the way now!");
    }
    return 0;   // Exit from main
}