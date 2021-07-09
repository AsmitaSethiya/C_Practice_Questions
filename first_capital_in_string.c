#include<stdio.h>
#include<string.h>

void main()
{
    int i;
    char str[100], c;
    
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            c = str[i];
            break;
        }
        else
        {
            continue;
        }
    }
    
    printf("First capital letter in given string is: %c", c);
}
