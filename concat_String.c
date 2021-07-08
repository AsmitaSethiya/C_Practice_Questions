#include<stdio.h>
#include<string.h>

void main()
{
    char a[100], b[100], c[100];
    
    int i = 0, j = 0;
    
    printf("Enter first String: ");
    gets(a);
    
    printf("Enetr second String: ");
    gets(b);
    
    while(a[i] != '\0')
    {
        c[j] = a[i];
        i++;
        j++;
    }
    
    i = 0;

    while(b[i] != '\0')
    {
        c[j] = b[i];
        i++;
        j++;
    }
    
    c[j] = '\0';
    
    printf("The new string is: ");
    puts(c);
    
}
