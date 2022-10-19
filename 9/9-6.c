#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;
    int max = 0;

    printf("\n Please enter the minimum value\n");
    scanf("%i", &num);

    printf("\n Please enter the maximum value\n");
    scanf("%i", &max);

    if( num <= max)
    {
        do 
        {
            printf ("\n%i", num);
            num += 1;
        }
        while ( num <= max);
    }
    return 0;
}