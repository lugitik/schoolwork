#include <stdio.h>

int leap(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
}

int dim(int month, int year)
{
    switch(month)
    {
        case 2:
        
            if (leap(year))
            {
                return 29;
            } else
            {
                return 28;
            }
            
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

void next_day(int *day, int *month, int *year)
{
    int dpm = dim(*month, *year);
    
    if (*day == dpm)
    {
        *day = 1;
        *month = *month + 1;
    } else if (*month < 12)
    {
        *day = *day + 1;
    }
    
    if (*month > 12)
    {
        *day = 1;
        *month = 1;
        *year = *year + 1;
    }
    
    
}

int main()
{
    int day, month, year;
    
    printf("Insert day: ");
    scanf("%d", &day);
    printf("\nInsert month: ");
    scanf("%d", &month);
    printf("\nInsert year: ");
    scanf("%d", &year);
    
    printf("\nDate: %d/%d/%d\n", day, month, year);
    
    next_day(&day, &month, &year);
    
    printf("\nNext Date: %d/%d/%d\n", day, month, year);
    
    return 0;
}