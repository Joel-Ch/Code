#include <stdio.h>
#include <stdlib.h>

int main (void )
{
    // Declare a in integer
    float c,d;

	// Declar and integer pointer
	float *ptrC;

	// Some assgnments
    c = 10; // C now contains the value 10
    ptrC = &c;   // ptrC now 'Points' to c

    // Change value of c via the pointer
    *ptrC = 20;

    // Get the value of c via the pointer and store in d
    d = *ptrC;  // d now contains 10
    printf ("\nThe value in d is %f", d);

    // Change the value of c via the pointer ptrC
    *ptrC = 1;  //c now contains 1
    printf ("\nThe value in c is %f", c);

	return 0;   // exit
}