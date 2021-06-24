#include<stdio.h>

void main()
{
    int num1, num2, sum= 0 , i;
    
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    
    for(i = num1; i <= num2; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    
    printf("The sum of all integers between %d and %d is : %d", num1, num2, sum);
}
