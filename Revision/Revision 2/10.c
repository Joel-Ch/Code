#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;
    char filename[20];
    char character;
    int count = 0;
    printf("enter filename:");
    scanf("%s", &filename);

    file = fopen(filename, "r");
    printf("opening...");
    if (filename == NULL)
        return -1;
    printf("opened:\n");

    while ((character = fgetc(file)) != EOF)
    {
        printf("%c\n", character);
        count += 1;
    }

    printf("read %i characters, closing file", count);

    fclose(file);

    return 0;
}
