#include<stdio.h>

void main()
{
    int num, i, count = 0, j;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The prime number upto %d are\n",num);
    
    for(i = 1; i <= num; i++)
    {
        count = 0;
        
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        
        if(count == 2)
        {
            printf("%d\n", i);
        }
    }
}
