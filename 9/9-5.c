#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0;

    do 
    {
        printf ("\nThis is iteration %i", num);
        num += 1;
    }
    while ( num <= 15);
    
    return 0;
}