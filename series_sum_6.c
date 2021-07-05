#include<stdio.h>

void main()
{
    int i , j, terms, sum = 0, mul;
    
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    for(i = 1; i <= terms; i++)
    {
        
        mul = 1;
        
        for(j = 1; j <= i; j++)
        {
            mul *= j;
        }
        
        sum += mul;
    }
    
    printf("Sum of series : %d", sum);
}
