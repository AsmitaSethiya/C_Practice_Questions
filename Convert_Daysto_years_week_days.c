#include<stdio.h>

void main()
{
    int no_of_days , years, weeks, days;
    
    printf("Enter the total days: ");
    scanf("%d", &no_of_days);
    
    years = no_of_days / 365;
    
    weeks = (no_of_days % 365) / 7;
    
    days = (no_of_days % 365) % 7;
    
    printf("%d = %d years, %d weeks, %d days \n", no_of_days, years, weeks, days);
    
}
