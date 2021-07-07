#include<stdio.h>
#include<string.h>

void main()
{
    char s[100];
    
    int count = 0;
    
    printf("Enter  a sentence : ");
    gets(s);
    
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] =='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    
    if(count == 0)
    {
        printf("There are no vowel\n");
    }
    else
    {
    printf("In the given sentence there are %d vowels", count);

    }    
}
