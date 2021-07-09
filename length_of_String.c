#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    int len = 0;
    
    printf("Enter a string: ");
    gets(a);
    
    //without using funcion
    for(int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }
     printf("Length of the string is: %d", len);
    
    // with using predefined function
    
    int length = strlen(a);
    
    printf("\nLength of the string is: %d", length);
}
