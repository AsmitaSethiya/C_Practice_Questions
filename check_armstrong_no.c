#include<stdio.h>

void main()
{
    int num, temp, r, sum = 0;
    
    printf("Enter a number to check whether it is armstrong or not: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(num != 0)
    {
        r = num % 10;
        sum += r * r * r;
        num = num / 10;
    }
    
    if(temp == sum)
    {
        printf("Given number %d is armstrong number!",temp);
    }
    else
    {
        printf("Given number %d is not armstrong number!",temp);
    }
}
