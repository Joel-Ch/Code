#include <stdio.h>
#include <stdlib.h>

// Simple function to populate an integer array
void PopulateTheArray ( int ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < 10 ; i++)
    {
        ArrayData[i] = i*i; // Treat it like a normal array
    }
    return;
}

int OutputToFile( int ArrayData[])
{
    FILE *BinaryFileWriter;
    int i;

    BinaryFileWriter = fopen("BinaryFileName.dat", "wb");

    if ( BinaryFileWriter == NULL)
    {
        printf ("\nthe binary file could not be opened for writing, exiting");
        return -1;
    }

    for ( i = 0 ; i < 10 ; i++)
    {
        fwrite (ArrayData, sizeof(float), 10, BinaryFileWriter);
    }


    fclose(BinaryFileWriter);

    return 0;
}


// Main () - execution starts here
int main (void)
{

    int ArrayData[10];
    // Pass the size, iSizeForArray) and the pointer created 
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(ArrayData);

    OutputToFile(ArrayData);

    return (0);     // Exit indicating sucess
}