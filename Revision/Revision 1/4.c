#include <stdio.h>

int main(int argc, char const *argv[])
{
    float number;
    printf("please enter a real number");
    scanf("%f", &number);
    if (number < 0)
    {
        printf("The number is negative");
    }
    else if (number > 0)
    {
        printf("The number is positive");
    }
    
    return 0;
}
