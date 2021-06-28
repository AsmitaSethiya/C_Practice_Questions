#include<stdio.h>

void main()
{
    int num, i, j, sum = 0;
    
    printf("Enter a number to know all perfect No. till n : ");
    scanf("%d", &num);
    
    printf("The perfect Numbers are: ");
    
    for(i = 1; i <= num; i++)
    {
        sum = 0;
        
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        
        if(sum == i)
        {
            printf("%d\t",i);
        }
    }
    

}
