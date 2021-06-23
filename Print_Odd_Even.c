#include<stdio.h>

void main()
{
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    if(number % 2 == 0)
    {
        printf("The number %d is Even", number);
    }
    else
    {
        printf("The number %d is Odd", number);
    }
    
}
