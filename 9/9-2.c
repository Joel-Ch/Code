#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age;		// Declare variable, no need to initialise this time 
					// as we read into it before it is tested against
    
    // The loop is always entered as the test is at the end
    do 
    {
        // Code must be executed at least once
        printf ("\nPlease enter your age");
        scanf("%d", &age);
        printf ("You are %d years old\n", age);    
        
        // Test is now made and the code 
        // repeats if the test equates as non-zerp
        // (i.e. is age is not zero)

        if ( age == 18 || age == 21)
        {
            printf("\nYou have come of age");
        }
    }
    while ( age != 0);
    
    return 0;
}