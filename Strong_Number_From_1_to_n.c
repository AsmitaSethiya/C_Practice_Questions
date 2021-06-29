#include<stdio.h>

int fact(int);

void main()
{
    int r, num, temp1, temp2, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Strong numbers are: ");
    
    for(int i = 1; i <= num; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        
        while(temp2 != 0)
        {
            r = temp2 % 10;
            sum += fact(r);
            temp2 = temp2 / 10;
        }
        
        if(sum == temp1)
        {
            printf("%d\t", sum);
        }
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
