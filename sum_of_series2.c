#include<stdio.h>
int factorial(int);

void main()
{
    int i,n;
    float sum = 0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
       sum += (float)i/factorial(i);
    }
    
    for(i = 1; i <= n; i++)
    {
        if(i < n)
        {
            printf("%d/%d!+ ",i,i);
        }
        else
        {
            printf("%d/%d!= ",i,i);
        }
    }
    
    printf("%f\n",sum);
}

int factorial(int n)
{
    
    int i, fact = 1;
    
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}
