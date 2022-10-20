#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Simple function to convert a value to radians
float ConvertToRadians(int d)
{
    // Calculate  \& return value
    float Result;
    Result = ((3.14159265 * d) / 180);
    return (Result);
}

// Simple function to populate an integer array
void PopulateTheArray(int Size, float ArrayData[])
{
    int i; // Variable to use in our loop

    for (i = 0; i <= Size; i++)
    {
        ArrayData[i] = ConvertToRadians(i); // Treat it like a normal array
    }
    return;
}

// Simple function do display contents an integer array
void DisplayTheArray(int Size, float ArrayData[])
{
    int i; // Variable to use in our loop

    for (i = 0; i <= Size; i++)
    {
        printf("Item %d of the array contains %.3f\n", i, ArrayData[i]);
    }
    return;
}

int OutputToFile(int Size, float ArrayData[], char *FileName, char *BinaryFileName)
{
    FILE *FileWriter, *BinaryFileWriter;
    int i;
    // declare variables

    if (strchr(FileName, '0') == NULL) // check if the user wants a text file
    {
        printf("opening text file '%s'", FileName);
        FileWriter = fopen(FileName, "w");

        if (FileWriter == NULL)
        {
            printf("\nthe file could not be opened for writing, exiting");
            return -1;
            // make sure the file is openable
        }

        printf("\nwriting...");

        for (i = 0; i <= Size; i++)
        {
            printf("\nwriting number %i", i+1);
            fprintf(FileWriter, "Item %d of the array contains %.3f\n", i, ArrayData[i]);
        }

        printf("\nsuccessfully written data to text file");

        fclose(FileWriter);
    }
    if (strchr(BinaryFileName, '0') == NULL) // check if the user wants a binary file
    {
        printf("opening binary file '%s'", BinaryFileName);
        BinaryFileWriter = fopen(BinaryFileName, "wb");

        if (BinaryFileWriter == NULL)
        {
            printf("\nthe binary file could not be opened for writing, exiting");
            return -1;
            // make sure the file is openable
        }

        printf("\nwriting...");

        for (i = 0; i <= Size; i++)
        {
            printf("\nwriting number %i", i+1);
            fwrite(ArrayData, sizeof(float), Size, BinaryFileWriter);
        }

        printf("\nsuccessfully written data to binary file");

        fclose(BinaryFileWriter);
    }

    return 0;
}

// Main () - execution starts here
int main(void)
{

    int iSizeForArray;
    float *pData; // A pointer to hold the base address of out array
    char FileName[50] = {0}, BinaryFileName[50] = {0};

    // Ask for the size of the array and store result

    printf("Please enter the text file name (or write 0 to skip)\n");
    scanf("%s", &FileName); // Enter text file name

    printf("Please enter the binary file name (or write 0 to skip)\n");
    scanf("%s", &BinaryFileName); // Enter binary file name

    printf("Please enter the amount of numbers to write to the file/s\n");
    scanf("%d", &iSizeForArray);

    // Use calloc with checking
    pData = calloc(iSizeForArray, sizeof(int));

    // Check we got the memory
    if (pData == NULL)
    {
        printf("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Pass the size, iSizeForArray) and the pointer created
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(iSizeForArray, pData);

    OutputToFile(iSizeForArray, pData, FileName, BinaryFileName);

    DisplayTheArray(iSizeForArray, pData);

    free(pData); // Free up the memory before exiting

    return (0); // Exit indicating sucess
}