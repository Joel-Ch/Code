#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *filePtr;
    char filename[20];

    printf("enter filename: ");
    scanf("%s", &filename);
    printf("opening file %s", filename);

    filePtr = fopen(filename, "w");

    if (filePtr == NULL)
        return -1;

    for (size_t i = 1; i <= 1000; i++)
    {
        fprintf(filePtr, "%i\n", i);
    }
    

    fclose(filePtr);

    return 0;
}
