#include<stdio.h>

void main()
{
    int year;
    
    printf("Enter the year you want to check: ");
    scanf("%d", &year);
    
    if(year % 400 == 0)
    {
        printf("%d is leap a year\n", year);
    }
    else if(year % 100 == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if(year % 4 == 0)
    {
        printf("%d is leap a year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}
