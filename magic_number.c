#include<stdio.h>

int GetSumOfDigits(int);
int GetReverseOfDigits(int);

void main()
{
    int num, SumOfDigits, ReverseOfDigits;
    
    printf("Enter a number to find out magic number or not: ");
    scanf("%d", &num);
    
    SumOfDigits = GetSumOfDigits(num);
    
    ReverseOfDigits = GetReverseOfDigits(SumOfDigits);
    
    if(SumOfDigits * ReverseOfDigits == num)
    {
        printf("%d is a magic number\n", num);
    }
    else
    {
        printf("%d is not a magic number\n", num);
    }
}


int GetSumOfDigits(int num)
{
    int r, sum = 0;
    
    while(num != 0)
    {
        r = num % 10;
        sum += r;
        num = num / 10;
    }
    
    return sum;
}


int GetReverseOfDigits(int num)
{
    int r, rev = 0;
    
    while(num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    
    return rev;
}
