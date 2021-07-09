#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i, j = 0, temp, sum = 0, n;
    
    char str[100], str2[100] = {0};
    
    printf("Enter a string: ");
    gets(str);
    
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            str2[j] = str[i];
            j++;
        }
    }
    
    temp = atoi(str2);
    
    printf("The digits present in string is %d: ", temp);
    
    while(temp != 0)
    {
        n = temp % 10;
        sum += n;
        temp = temp / 10;
    }
    printf("The sum of digits is %d", sum);
}
