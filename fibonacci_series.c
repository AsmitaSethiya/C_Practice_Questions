#include<stdio.h>

void main()
{
    int a = 0, b = 1, c, num, count;
    
    printf("Enter a number to obtain fibonacci series: ");
    scanf("%d", &num);
    
    printf("%d\t%d\t", a, b);
    
    count = 2;
    while(count < num)
    {
        c = a + b;
        printf("%d\t", c);
        
        a = b; 
        b = c;
        count++;
    }
}
