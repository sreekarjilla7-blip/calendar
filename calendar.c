#include <stdio.h>
//to find that if the year is a leap year or not
int isLeapYear(int year) 
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ;
}
//to find the first day of the year
int getFirstDayOfYear(int year) 
{
    int day = (year - 1) * 365;
    day += (year - 1) / 4; 
    day -= (year - 1) / 100;
    day += (year - 1) / 400;
    return day % 7;
}
int main() 
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = 
    {"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    if (isLeapYear(year))               //changing the days in feb month if it is leap year
    {
        daysInMonth[1] = 29;
    }
    int startDay = getFirstDayOfYear(year);         //calling of first day function
    printf("\n\t\tCalendar - %d\n", year);
    printf("------------------------------------------------------------\n") ;
    for (int i = 0; i < 12; i++) 
    {
        printf("\n\t\t%s\n", months[i]);
        printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        for (int spaces = 0; spaces < startDay; spaces++) 
        {
            printf("     ");
        }
        for (int day = 1; day <= daysInMonth[i]; day++) 
        {
            printf("%3d  ", day);
            if ((startDay + day) % 7 == 0) 
            {
                printf("\n");
            }
        }
        printf("\n");
        startDay = (startDay + daysInMonth[i]) % 7;       //resetting value for next month
    }
    return 0;
}
