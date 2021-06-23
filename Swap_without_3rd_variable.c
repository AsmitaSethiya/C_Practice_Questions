#include<stdio.h>

void main()
{
    int a, b;
    
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swaping the value of a is %d and the value of b is %d ", a, b);
    
    
}
