#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int space = 0;
    
    printf("Enter a sentence in which you count the white spaces: ");
    gets(str);
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            space++;
        }
    }
    
    printf("The numeber of space in the given sentence are: %d", space);
}
