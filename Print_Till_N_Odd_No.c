#include<stdio.h>

void main()
{
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", i);
        }
        else
        {
            continue;
        }
    }
    
}
