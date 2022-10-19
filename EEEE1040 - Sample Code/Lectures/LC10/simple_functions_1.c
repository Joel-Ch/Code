#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // Needed to give access to M_PI

/* FUNCTION: CalculateAreaOfCircle

	INPUTS:		radius 		float
	RETURNS:	area 		float

	Description
	Calculate area using area = M_PI * radius * radius

*/


float CalculateAreaOfCircle ( float radius )
{
	float area;
	area = M_PI * radius * radius ;
	return (area) ;
}


/* Show use of function  */
int main (void)
{
	// Declare variables - no need to initialise as values will be read in / calculated
	float r, a;

	// Prompt for and obtain value
	printf ("Please enter the raduis of the circle: ");
	scanf ("%f", &r);

	// Use our function to calculate the area
	a = CalculateAreaOfCircle(r);

	// And display the answer on the screen
	printf ("The area of a circle of radius %f is %f\n", r, a );

	// Note: 	As the function returns a value, if we did not need to store it
	//			we could calculate & display within the printf statement

	printf ("The area of a circle of radius %f is %f\n", r, CalculateAreaOfCircle(r) );

	// All done
	return 0;
}
