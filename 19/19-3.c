#include <stdio.h>
#include <stdlib.h>

struct PersonalDetails
{
    int age, year_of_birth;
    char forename[30], surname[50];

};


void DisplayStruct(struct PersonalDetails Details)
{
    printf("Hello %s %s, you are %i and were born in %i", Details.forename, Details.surname, Details.age, Details.year_of_birth);
}

int main(void)
{
    struct PersonalDetails Details;

    printf("Please enter your first name\n");
    scanf("%s", &Details.forename);
    printf("Please enter your surname\n");
    scanf("%s", &Details.surname);
    printf("Please enter your age\n");
    scanf("%i", &Details.age);
    printf("Please enter your year of birth\n");
    scanf("%i", &Details.year_of_birth);

    DisplayStruct(Details);

}