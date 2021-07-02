#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i, j, num, power, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter power you want to check: ");
    scanf("%d", &power);
    
    temp = num;
    
    if(num == 0 || num == 1)
    {
        printf("Enter number other than 0 and 1\n");
        exit(0);
    }
    
    while(num > 1)
    {
        if(num % power != 0)
        {
            printf("Given number %d is not power of %d\n", temp, power);
            exit(0);
        }
        
        num = num / power;
    }
    
    printf("Given number %d is power of %d\n", temp, power);
    
}
