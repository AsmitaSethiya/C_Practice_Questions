#include<stdio.h>

int GetGCD(int , int);

void main()
{
    int a, b, gcd;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter vale of b: ");
    scanf("%d", &b);
    
    gcd = GetGCD(a,b);
    
    printf("GCD between %d and %d is: %d", a, b, gcd);
}

int GetGCD(int x, int y)
{
    int r;
    
    if(y == 0)
    {
        return x;
    }
    else
    {
        r = x % y;
        return GetGCD(y,r);
    }
}
