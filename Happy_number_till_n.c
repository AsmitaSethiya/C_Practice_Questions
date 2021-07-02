#include<stdio.h>

void main()
{
    int i, j, num, sum = 0, happy, temp;
    
    printf("Enter a number: ");
    scanf("%d", &happy);
    
    for(i = 1; i <= happy; i++)
    {
        sum = 0;
        num = i;
        temp = num;
        
        while(sum != 1 && sum != 4)
        {
            sum = 0;
            
            while(num > 0)
            {
                j = num % 10;
                sum += (j * j);
                num = num / 10;
            }
            
            num = sum;
            {
                if(sum == 1)
                {
                    printf("%d\t", i);
                }
            }
        }
    }
}
