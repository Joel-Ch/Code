#include <stdio.h>
#include <stdlib.h>

struct PersonalDetails
{
    int age, year_of_birth;
    char forename[30], surname[50], filename[50];
};

void DisplayStruct(struct PersonalDetails Details)
{
    // writes out the structure
    printf("Hello %s %s, you are %i and were born in %i\n", Details.forename, Details.surname, Details.age, Details.year_of_birth);
}

int ReadFromFile(struct PersonalDetails Details)
{

    printf("Reading from file...\n");

    FILE *FileReader;

    FileReader = fopen(Details.filename, "rb");


    if (FileReader == NULL)
    {
        printf("\nThe file could not be opened for reading, exiting");
        return -1;
        // check if its 
    }

    fread(&Details, sizeof(struct PersonalDetails), 1, FileReader);

    DisplayStruct(Details);

    fclose(FileReader);

    return 0;
}

int WriteToFile(struct PersonalDetails Details)
{
    printf("Writing to file...\n");

    printf("Please enter your first name\n");
    scanf("%s", &Details.forename);
    printf("Please enter your surname\n");
    scanf("%s", &Details.surname);
    printf("Please enter your age\n");
    scanf("%i", &Details.age);
    printf("Please enter your year of birth\n");
    scanf("%i", &Details.year_of_birth);

    FILE *FileWriter;

    FileWriter = fopen(Details.filename, "wb");

    if (FileWriter == NULL)
    {
        printf("\nThe file could not be opened for reading, exiting");
        return -1;
    }

    fwrite(&Details, sizeof(struct PersonalDetails), 1, FileWriter);

    fclose(FileWriter);

    return 0;
}

int main(void)
{
    struct PersonalDetails Details;
    int chooser;

    printf("Choose whether to read (1), write(2) or cancel(anything else)\n");
    scanf("%i", &chooser);

    switch (chooser)
    {
    case 1:
        printf("Please choose the file to read from\n");
        scanf("%s", &Details.filename);
        ReadFromFile(Details);
        break;

    case 2:
        printf("Please choose the file to write to\n");
        scanf("%s", &Details.filename);
        WriteToFile(Details);
        break;

    default:
        printf("Cancelling");
        return 0;
        break;
    }

    printf("completed");

    return 0;
}