#include<stdio.h>

void main()
{
    int i, j, flag = 0, temp, num, frequency[9];
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    for(i = 0; i < 10; i++)
    {
        frequency[i] = 0;
    }
    
    while(num != 0)
    {
        j = num % 10;
        frequency[j]++;
        num = num / 10
        ;
    }
    
    for(i = 0; i < 10; i++)
    {
        if(frequency[i] > 1)
        {
            flag = 1;
            printf("%d --> repeated %d times\n", i, frequency[i]);
        }
    }
    
    if(flag == 0)
    {
        printf("No Repeated Digits\n");
    }
    else
    {
        printf("Repeated digits are there\n");
    }
    
}
