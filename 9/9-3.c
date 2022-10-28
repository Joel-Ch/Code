#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int _i = 1;
    int name[50];		// Declare variable, no need to initialise this time 
					// as we read into it before it is tested against
    
    // The loop is always entered as the test is at the end
    printf("Please enter your name");
    scanf("\n%s", &name);
    do 
    {
        // Code must be executed at least once
        printf ("%s\n", &name);
    }
    while ( _i != 0);
    
    return 0;
}