#include<stdio.h>
#include<string.h>

void main()
{
    int i, k = 0, count[26] = {0}, x;
    
    char str[100];
    
    printf("Enter a sentence: ");
    gets(str);
    
    while(str[k] != '\0')
    {
        if(str[k] >= 'a' && str[k] <= 'z')
        {
            x = str[k] - 'a';
            count[x]++;
        }
        
        if(str[k] >= 'A' && str[k] <= 'Z')
        {
            x = str[k] - 'A';
            count[x]++;
        }
        
        k++;
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(count[i] != 0)
        {
            printf("%c occured %d times\n", i + 'a', count[i]);
        }
    }
}
