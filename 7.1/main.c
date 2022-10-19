#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    char    name [50];
    int     age = 0;

    printf("What's your name?\n\n");
    scanf("%s", &name);

    printf("\nHow old are you\n\n");
    scanf("%i", &age);

    printf("\nHi %s, you are %i\n", name, age);

    return 0;
}
