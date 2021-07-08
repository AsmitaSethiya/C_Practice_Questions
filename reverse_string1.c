#include<stdio.h>
#include<string.h>

void main()
{
    char a[10];
    
    printf("Enter a String: ");
    gets(a);
    
    for(int i = strlen(a) - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
}
