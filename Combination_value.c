#include<stdio.h>

int factorial(int);

void main()
{
    int n, r;
    float nCr;
    
    printf("Enter value of n in nCr: ");
    scanf("%d", &n);
    
    printf("Enter value of r in nCr: ");
    scanf("%d", &r);
    
    if(n >= r && n >= 0 && r >=0)
    {
        nCr = (float)factorial(n)/(factorial(r) * factorial(n - r));
        printf("Value of %dC%d = %f\n", n, r, nCr);
    }
    else
    {
        printf("Invalid Entry\n");
    }
}

int factorial(int num)
{
    int i , fact = 1;
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}
