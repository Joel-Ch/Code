#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    printf("please enter a value");
    scanf("%i", &input);
    switch (input)
    {
    case 1:
        printf("Happy First Birthday");
        break;
    case 17:
        printf("You can lean to drive");
        break;
    case 30:
        printf("Still young");
        break;
    case 40:
        printf("Getting older");
        break;

    default:
        break;
    }
    
    return 0;
}
