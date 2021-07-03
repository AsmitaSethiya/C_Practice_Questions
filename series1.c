#include<stdio.h>

void main()
{
    int i,n;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        printf("1 / %d\t ",i);
    }
}
