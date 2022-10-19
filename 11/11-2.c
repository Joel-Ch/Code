#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
    // Declare variables - pre-populate the array
    int Ages[90];
    int i;

    for (i = 0 ; i<90 ; i++)
    {
        Ages[i] = i;
    }

    // Loop from 0 to 9 inclusive
    for  ( i = 0 ; i < 90 ; i++ )
    {
        printf ("Item %d contains value %d\n",i ,Ages[i]);
    }

    // Exit the application
    return 0;
}