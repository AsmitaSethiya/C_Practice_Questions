#include<stdio.h>

void main()
{
    int i, j, terms, sum = 0;
    
    printf("Enter numbers of Terms: ");
    scanf("%d", &terms);
    
    for(i = 1; i <= terms; i++)
    {
        for(j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    
    printf("Sum of Series: %d", sum);
}
