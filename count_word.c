#include<stdio.h>
#include<string.h>

void main()
{
    char s[100];
    int word = 1;
    
    printf("Enter a sentence: ");
    gets(s);
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' ')
        {
            word++;
        }
    }
    
    printf("%d\n", word);
    
}
