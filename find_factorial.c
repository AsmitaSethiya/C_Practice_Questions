#include<stdio.h>

void main()
{
    int number, factorial = 1, i;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    
    printf("factorial of  %d is : %d", number, factorial);
    
}
