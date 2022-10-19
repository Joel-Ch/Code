#include <stdio.h>
#include <stdlib.h>

int nd ( int y,int m,int d)
{
    if ( m < 3 )
    {
    m += 12;
    y -= 1;
    }
return (((13*m+3)/5 + d + y + y/4 - y/100 + y/400)%7);
}

int main(void)
{
	int Years, Months, Days, CurrentDay;

    printf("\nYears\n");
    scanf("%i", &Years);

    printf("\nMonths\n");
    scanf("%i", &Months);

    printf("\nDays\n");
    scanf("%i", &Days);

    CurrentDay = nd(Years, Months, Days);
    printf("\nnd = %i", CurrentDay);

    return 0;
}