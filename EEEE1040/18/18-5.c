#include <stdio.h>
#include <stdlib.h>

// Simple function to convert a value to radians
float ConvertToRadians ( int d)
{
	// Calculate  \& return value
	float Result;
	Result = ((3.14159265 * d) / 180);
	return (Result);
}

// Simple function to populate an integer array
void PopulateTheArray ( int Size, float ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        ArrayData[i] = ConvertToRadians(i); // Treat it like a normal array
    }
    return;
}

// Simple function do display contents an integer array
void DisplayTheArray ( int Size, float ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        printf ("Item %d of the array contains %.3f\n", i, ArrayData[i]);
    }
    return;
}

int OutputToFile(int Size, float ArrayData[])
{
    FILE *FileWriter, *BinaryFileWriter;
    int i;

    FileWriter = fopen("FileName.txt", "w");

    if ( FileWriter == NULL)
    {
        printf ("\nthe file could not be opened for writing, exiting");
        return -1;
    }

    BinaryFileWriter = fopen("BinaryFileName.dat", "wb");

    if ( BinaryFileWriter == NULL)
    {
        printf ("\nthe binary file could not be opened for writing, exiting");
        return -1;
    }

    for ( i = 0 ; i < Size ; i++)
    {
        fprintf (FileWriter, "Item %d of the array contains %.3f\n", i, ArrayData[i]);
        fwrite (ArrayData, sizeof(float), Size, BinaryFileWriter);
    }


    fclose(FileWriter);
    fclose(BinaryFileWriter);

    return 0;
}


// Main () - execution starts here
int main (void)
{

    int iSizeForArray;
    float *pData;              // A pointer to hold the base address of out array

    // Ask for the size of the array and store result

    printf("\nPlease enter the size of the array to dynamically allocate\n");
    scanf ("%d", &iSizeForArray);

    // Use calloc with checking
    pData = calloc ( iSizeForArray, sizeof (int));

    // Check we got the memory
    if ( pData == NULL)
    {
        printf ("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Pass the size, iSizeForArray) and the pointer created 
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(iSizeForArray, pData);

    OutputToFile(iSizeForArray, pData);

    DisplayTheArray(iSizeForArray, pData);

    free (pData);	    // Free up the memory before exiting

    return (0);     // Exit indicating sucess
}