#include<stdio.h>

void main()
{
    int n, r, rev = 0,temp;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    
    while(n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    
    if(temp == rev)
    {
        printf("Given no is palindrom\n");
    }
    else
    {
        printf("Non- palindrom");
    }
    
}
