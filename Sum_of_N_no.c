#include<stdio.h>

void main()
{
    int i, sum = 0, n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum of n no is : %d", sum);
}
