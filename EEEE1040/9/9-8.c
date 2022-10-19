#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, max, tot = 0;

    printf("\nPlease enter the minimum value\n");
    scanf("%i", &num);

    printf("\nPlease enter the maximum value\n");
    scanf("%i", &max);

    if( num <= max)
    {
        do 
        {
            tot += num;
            num += 1;
        }
        while ( num <= max);
    }

    printf("\nThe total is %i", tot);

    return 0;
}