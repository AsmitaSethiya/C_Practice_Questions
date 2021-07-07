#include<stdio.h>
//#include<String.h>

void main()
{
    int count = 0;
    
    char s[10];
    
    printf("Enter a String: ");
    //gets(ch);
    scanf("%s", s);
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] =='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    
    if(count == 0)
    {
        printf("No vowels are there\n");
    }
    else
    {
        printf("In the given String %s the total no of vowels are: %d",s, count);
    }
}
