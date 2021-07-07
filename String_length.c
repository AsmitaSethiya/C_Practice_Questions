#include<stdio.h>

void main()
{
    char s[100];
    int len = 0;
    
    printf("Enter a String: ");
    scanf("%s", s);
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    
    printf("The length of %s is %d\n", s, len);
}
