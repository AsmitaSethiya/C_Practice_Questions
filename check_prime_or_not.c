#include<stdio.h>

void main()
{
    int num , i , f = 0;
    
    printf("Enter a number to check prime or not: ");
    scanf("%d", &num);
    
    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            f = 1;
            break;
        }
    }
    
    if(f == 1)
    {
        printf("Non-prime");
    }
    else
    {
        printf("Prime");
    }
}
