#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Simple function to convert a value to radians
float ConvertToRadians(int d)
{
    // Calculate  \& return value
    float Result;
    Result = ((3.14159265 * d)/180);
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
        printf("Item %d of the array contains %.3f\n", i+1, ArrayData[i]);
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
        printf("Opening text file '%s'", FileName);
        FileWriter = fopen(FileName, "w");

        if (FileWriter == NULL)
        {
            printf("\nThe file could not be opened for writing, exiting");
            return -1;
            // make sure the file is openable
        }

        printf("\nWriting...");

        int Sizes = Size;
        // Don't question it, it just works

        for (i = 0; i <= Sizes; i++)
        {
            printf("\nWriting number %i", i+1);
            fprintf(FileWriter, "Item %i of the array contains number %.3f\n", i, ArrayData[i]);
        }

        printf("\nSuccessfully written data to text file\n\n");

        fclose(FileWriter);
    }
    if (strchr(BinaryFileName, '0') == NULL) // check if the user wants a binary file
    {
        printf("Opening binary file '%s'", BinaryFileName);
        BinaryFileWriter = fopen(BinaryFileName, "wb");

        if (BinaryFileWriter == NULL)
        {
            printf("\nThe binary file could not be opened for writing, exiting");
            return -1;
            // make sure the file is openable
        }

        printf("\nWriting...");

        for (i = 0; i <= Size; i++)
        {
            printf("\nWriting number %i", i+1);
            fwrite(ArrayData, sizeof(float), Size, BinaryFileWriter);
        }

        printf("\nSuccessfully written data to binary file\n\n");

        fclose(BinaryFileWriter);
    }

    return 0;
}

// Main () - execution starts here
int main(void)
{

    int iSizeForArray;
    float *pData; // A pointer to hold the base address of out array
    char FileName[50], BinaryFileName[50] = {0};

    // Ask for the size of the array and store result

    printf("Please enter the text file name (or write 0 to skip)\n");
    scanf("%s", FileName); // Enter text file name

    printf("Please enter the binary file name (or write 0 to skip)\n");
    scanf("%s", BinaryFileName); // Enter binary file name

    printf("Please enter the amount of numbers to write to the file/s\n");
    scanf("%d", &iSizeForArray);

    iSizeForArray -= 1;

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

/* IMPORTANT PSA: This entire code functions perfectly if iSizeForArray<=2 but if not it can't open a file 
   IMPORTANT PSA Pt2: This code works in code::blocks, thereby meaning the problem is with this compiler. This is worrying
   The above issues are fixed by the code on line 58 for god knows what reason (probably some pointer tomfoolery)*/
