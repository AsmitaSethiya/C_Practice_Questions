#include<stdio.h>

void main()
{
    int num, maxprime = 1, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++)
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
            if(maxprime < i)
            {
                maxprime = i;
            }
        }
    }
    
    printf("Maximum prime number below %d is %d", num, maxprime);
}
