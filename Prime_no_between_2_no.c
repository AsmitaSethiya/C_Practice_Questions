#include<stdio.h>

void main()
{
    int num1, num2, count = 0;
    
    printf("Enter a number 1: ");
    scanf("%d", &num1);
    
    printf("Enter a number 2: ");
    scanf("%d", &num2);
    
    printf("Prime numbers between %d and %d are: \n",num1,num2);
    
    for(int i = num1; i <= num2; i++)
    {
        count = 0;
        
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        
        if(count == 2)
        {
            printf("%d\t", i);
        }
    }
}
