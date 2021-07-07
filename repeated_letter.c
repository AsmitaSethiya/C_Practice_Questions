#include<stdio.h>
#include<string.h>


void main()
{
    char s[100];
    
    int count = 0;
    char c;
    
    printf("Enter a sentence: ");
    gets(s);
    
    printf("Enter a character to know it's repetance in sentence: ");
    scanf("%c", &c);
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == c)
        {
            count++;
        }
    }
    
    printf("Letter %c is repeated %d times in sentence", c, count);
}
