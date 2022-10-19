#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r = 0, h = 0, A = 0;

    printf("Enter the radius\n");
    scanf("%f",&r);
    printf("\nEnter the height\n");
    scanf("%f", &h);

    A = 2*3.14159265*r*(r+h);

    printf("The Surface Area is %.2f", A);

    return 0;
}
