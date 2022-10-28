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

void CalcDayWord (int CurrentDay)
{
    switch (CurrentDay)
    {
        case 0 :  
            printf("Monday");  
            break;
        case 1 :  
            printf("Tuesday"); 
            break;
        case 2 :  
            printf("Wednesday");
            break;
        case 3 :  
            printf("Thursday");  
            break;
        case 4 :  
            printf("Friday"); 
            break;
        case 5 :  
            printf("Saturday");
            break;
        case 6 :  
            printf("Sunday");  
            break;
    }
return;
}

int main(void)
{
	int Years, Months, Days, CurrentDay;

    printf("Please enter todays date:");

    printf("\nDays\n");
    scanf("%i", &Days);

    printf("\nMonths\n");
    scanf("%i", &Months);

    printf("\nYears\n");
    scanf("%i", &Years);

// This section asks for todays date
    CurrentDay = nd(Years, Months, Days);
// Calls the function to calculate the number
    printf("\nToday is a ");
    CalcDayWord(CurrentDay);
// Calls the function to convert the number to a name and print it

    return 0;
}