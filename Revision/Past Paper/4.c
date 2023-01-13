#include <stdio.h>

void main()
{
    float speed;
    printf("enter wind speed (mph)");
    scanf("%f", &speed);
    if (74<=speed && speed<=95)
    {
        printf("category 1");
    }
    else if (96 <= speed && speed <= 110)
    {
        printf("category 2");
    }
    else if (111 <= speed && speed <= 129)
    {
        printf("category 3");
    }
    else if (130 <= speed && speed <= 156)
    {
        printf("category 4");
    }
    else if (157 <= speed)
    {
        printf("category 5");
    }
    else
    {
        printf("not a hurricane");
    }

    return;
}