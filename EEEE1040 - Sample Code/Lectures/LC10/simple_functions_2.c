#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // Needed to give access to M_PI

/* FUNCTION: CalculateSurfaceAreaOfCylinder

	INPUTS:		radius 		float
                length      float

	RETURNS:	SurfaceArea	float

	Description
	Calculate the surface area of a cylinder given radius and length

*/


float CalculateSurfaceAreaOfCylinder ( float radius, float length )
{
	float area;
	area = 2.0 * ( M_PI * radius * radius ) + ( M_PI * 2.0 * radius * length );       // two ends + side
	return (area) ;
}


/* Show use of function  */
int main (void)
{
	// Declare variables - no need to initialise as values will be read in / calculated
	float r, l, sa;

	// Prompt for and obtain values
	printf ("Please enter the radius of the cylinder: ");
	scanf ("%f", &r);

    printf ("Please enter the length of the cylinder: ");
	scanf ("%f", &l);

	// Use our function to calculate the area
	sa = CalculateSurfaceAreaOfCylinder(r,l);

	// And display the answer on the screen
	printf ("The surface of a circle of radius %f and length %f is %f\n", r, l, sa );

	// Note: 	As the function returns a value, if we did not need to store it
	//			we could calculate & display within the printf statement
	printf ("The surface of a circle of radius %f and length %f is %f\n", r, l, CalculateSurfaceAreaOfCylinder(r,l) );

	// All done
	return 0;
}
