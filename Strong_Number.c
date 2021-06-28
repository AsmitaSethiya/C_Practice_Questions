#include<stdio.h>
int fact(int);

void main()
{
    int num, sum = 0, temp, r ;
    
    
    printf("Enter a number to check whether it is Strong number or not: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(num != 0)
    {
        r = num % 10;
        sum += fact(r);
        num = num / 10;
    }
    
    if(temp == sum)
    {
        printf("Given number %d is an Strong number\n", temp);
    }
    else
    {
        printf("Given number %d is not a Strong number\n", temp);
    }
}


int fact(int n)
{
    int factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    
    return factorial;
}
