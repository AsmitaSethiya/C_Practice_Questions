#include<stdio.h>

int GetSumOfDigits(int);
int GetRevOfSum(int);

void main()
{
    int num, sumOfDigit, revOfSum;
    
    printf("Enter a number to find out all magic number till N: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++)
    {
        sumOfDigit = GetSumOfDigits(i);
        revOfSum = GetRevOfSum(sumOfDigit);
        
        if(sumOfDigit * revOfSum == i)
        {
            printf("%d\t", i);
        }
    }
    
}

int GetSumOfDigits(int num)
{
    int sum = 0, r;
    
    while(num != 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    
    return sum;
}


int GetRevOfSum(int num)
{
    int rev = 0, r;
    
    while(num != 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    
    return rev;
}

