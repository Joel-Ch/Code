#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  integer = 0;

	// Enter a value
    printf ("Enter an integer value\n");
    scanf ("%i", &integer);

	if (integer==0)
    {
	    printf ("Black");    
    }
    else if (integer==1)
    {
        printf("Brown");
    }
    else if (integer==2)
    {
        printf("Red");
    }
    else if (integer==3)
    {
        printf("Orange");
    }
    else if (integer==4)
    {
        printf("Yellow");
    }
    else if (integer==5)
    {
        printf("Green");
    }
    else if (integer==6)
    {
        printf("Blue");
    }
    else if (integer==7)
    {
        printf("Violet");
    }
    else if (integer==8)
    {
        printf("Grey");
    }
    else if (integer==9)
    {
        printf("White");
    }
    return 0;   // Exit from main
}