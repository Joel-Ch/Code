#include <stdio.h>
#include <stdlib.h>

struct PersonalDetails
{
    int age;
    char forename[30], surname[50];
};


int main(void)
{
    struct PersonalDetails Details;

    printf("Please enter your age\n");
    scanf("%i", &Details.age);
    printf("Please enter your first name\n");
    scanf("%s", &Details.forename);
    printf("Please enter your surname\n");
    scanf("%s", &Details.surname);


    printf("Hello %s %s, you are %i", Details.forename, Details.surname, Details.age);

}