#include<stdio.h>

void main()
{
    int i, n;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++)
    {
        printf("%d/%d + ", i , (i * i));
    }
    
    if(i == n)
    {
        printf("%d/%d ", i, (i * i));
    }
}
