#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array, an integer pointer and a looping variable
    int *pData, SizeOfArray, i;

    printf("Please enter the size of the array\n");
    scanf("%i", &SizeOfArray);

    // Using calloc (same approach malloc)
    pData = calloc(SizeOfArray, sizeof(int));


    if (pData == NULL)
    {
        printf("\nMemory could not be allocated - terminating");
        return -1; // Use minus one as we did not exit sucesfully
    }

    // We have our memory, make use of it here!

    // Test if we got this far
    printf("success?");
    // NB we did not


    // Set the values in the array
    for (i = 0; i <= SizeOfArray; i++)
    {
        pData[i] = i;
    }

    // Print out all the values in the array
    for (i = 0; i <= SizeOfArray; i++)
    {
        printf("Item %d contains value %d\n", i, pData[i]);
    }

    // Free up the allocated memoey
    free(pData);

    return 0; // Exit sucesfully
}