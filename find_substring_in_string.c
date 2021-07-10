#include<stdio.h>
#include<string.h>

void main()
{
    int i, j, flag, len1, len2;
    
    char str[100], substr[100];
    
    printf("Enter string: ");
    
    gets(str);
    
    printf("Enetr substring you want to search : ");
    gets(substr);
    
    len1 = strlen(str);
    len2 = strlen(substr);
    
    for(i = 0; i <= len1 - len2; i++)
    {
        for(j =i ; j < i + len2; j++)
        {
            flag = 1;
            if(str[j] != substr[j - i])
            {
                flag = 0;
                break;
            }
        }
        
        if(flag == 1)
        {
            break;
        }
    }
    
    if(flag == 1)
    {
        printf("Search successfull\n");
    }
    else
    {
        printf("Search is unsuccessful\n");
    }
     
}
