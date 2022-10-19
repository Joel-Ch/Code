#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    char a = 200;
    unsigned char b = 200;

    signed int x = 200;
    unsigned int y = 200;

	printf ("Displaying a[signed] & b[unsigned] as signed values\n\n");
	printf ("\ta = %d, b = %d \n\n ", a, b);

	// Set both to zero
	a = 0;
	b = 0;
    printf ("Set both to zero\n\n");
	printf ("\ta = %d, b = %d \n\n ", a, b);

    // Subtract one from both
    a = a - 1;
    b = b - 1;
    printf ("Subtracted one from both, displaying a[signed] & b[unsigned] as signed values\n\n");
	printf ("\ta = %d, b = %d \n\n ", a, b);

    // Set both to 127
	a = 127;
	b = 127;
    printf ("Set both to 127\n\n");
	printf ("\ta = %d, b = %d \n\n ", a, b);

    // Add one to both
    a = a + 1;
    b = b + 1;
    printf ("Added one to both, displaying a[signed] & b[unsigned] as signed values\n\n");
	printf ("\ta = %d, b = %d \n\n ", a, b);


	// ========================= Integers =========================
	printf ("\n============ Integers ==============\n\n");

	// Set both to zero
	x = 0;
	y = 0;
    printf ("Set both to zero\n\n");
	printf ("\tx = %d, y = %d \n\n ", x, y);

    // Subtract one from both
    x = x - 1;
    y = y - 1;
    printf ("Subtracted one from both, displaying a[signed] & b[unsigned] as signed values\n\n");
	printf ("\tDisplay both as signed values (wrong!) x = %d, y = %d \n\n ", x, y);
	printf ("\tDisplay both as unsigned values (wrong!) x = %u, y = %u \n\n ", x, y);
    printf ("\tDisplay x as signed, y as unsigned (CORRECT!) x = %d, y = %u \n\n ", x, y);


    // Set both to the midpoint value (I know to be 2147483647)
	x = 2147483647;
	y = 2147483647;
    printf ("Set both to the 'max value for an signed integer value'\n\n");
	printf ("\tx = %d, y = %d \n\n ", x, y);

    // Add one to both
    x = x + 1;
    y = y + 1;
    printf ("Subtracted one from both, displaying a[signed] & b[unsigned] as signed values\n\n");
	printf ("\tDisplay both as signed values (wrong!) x = %d, y = %d \n\n ", x, y);
	printf ("\tDisplay both as unsigned values (wrong!) x = %u, y = %u \n\n ", x, y);
    printf ("\tDisplay x as signed, y as unsigned (CORRECT!) x = %d, y = %u \n\n ", x, y);


}


