#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{

    // Declate file stream variables
    FILE *fInput;

    // Other variables needed
    int i, SizeOfArray, NumberOfBytes;
    float *pData;              // A pointer to hold the base address of out array

    // Ask for the size of the array and store result

    printf("\nPlease enter the size of the array to dynamically allocate\n");
    scanf ("%d", &SizeOfArray);

    // Use calloc with checking
    pData = calloc ( SizeOfArray, sizeof (int));

    // Check we got the memory
    if ( pData == NULL)
    {
        printf ("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Try and open the binary "numbers.dat" (in the current directory) file for reading
    fInput = fopen ("BinaryFileName.dat", "rb");

    // Check we were able to open the file
    if ( fInput== NULL)
    {
        printf ("\nThe file could not be opened for reading, exiting");
        return -1;
    }


    // Now read the entire array on one go
    NumberOfBytes = fread ( pData, sizeof(float), SizeOfArray , fInput);

    // Display the values read from the file on the screen
    for ( i = 0 ; i < SizeOfArray ; i++)
    {
        printf ("Item %d of the array contains %f\n",i, pData[i]);
    }

    printf("\n%i", NumberOfBytes);

    // And close the file
    fclose (fInput);

    return (0);     // Exit indicating sucess
}