#include<stdio.h>

void main()
{
    int num1, num2, num3;
    
    printf("Enter a number 1: ");
    scanf("%d", &num1);
    
    printf("Enter a number 2: ");
    scanf("%d", &num2);
    
    printf("Enter a numer 3: ");
    scanf("%d", &num3);
    
    if((num1 > num2) && (num1 > num3))
    {
        printf("%d is bigger\n", num1);
    }
    else if((num2 > num1) && (num2 > num3))
    {
        printf("%d is bigger\n", num2);
    }
    else
    {
        printf("%d is bigger", num3);
    }
}
