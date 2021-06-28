#include<stdio.h>

void main()
{
    int i, num, sum = 0;
    
    printf("Enter a number to know whether it is perect number or not: ");
    scanf("%d", &num);
    
    for(i = 1; i < num; i++)
    {
            if(num % i == 0)
            {
                sum += i;
            }
       
    }
    
    if(sum == num)
    {
        printf("The given number %d is Perfect number.", num);
    }
    else
    {
        printf("The given number %d is Not a Perfect",num);
    }
}
