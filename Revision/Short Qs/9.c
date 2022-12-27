#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    printf("enter a non-integer value");
    scanf("%d", &input);
    if (input >= 0 && input <= 0.8)
    {
        printf("Logic Zero");
    }
    else if (input > 0.8 && input <= 2.5)
    {
        printf("Undetermined");
    }
    else if (input > 2.5 && input <= 5)
    {
        printf("Logic One");
    }
    
    
    return 0;
}