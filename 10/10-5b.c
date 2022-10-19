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

const char * CalcDayWord (int CurrentDay, char DayName[])
{
    switch (CurrentDay)
    {
        case 0 :  
            DayName = "Monday";  
            break;
        case 1 :  
            DayName = "Tuesday"; 
            break;
        case 2 :  
            DayName = "Wednesday";
            break;
        case 3 :  
            DayName = "Thursday";  
            break;
        case 4 :  
            DayName = "Friday"; 
            break;
        case 5 :  
            DayName = "Saturday";
            break;
        case 6 :  
            DayName = "Sunday";  
            break;
    }
return DayName;
}

int main(void)
{
	int Years, Months, Days, CurrentDay;
    const char * DayName;

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
    printf("%i", CurrentDay);

    DayName = CalcDayWord(CurrentDay, 0);
// Calls the function to convert the number to a string
    printf("\nToday is a %s", DayName);

    return 0;
}