#include<stdio.h>

void main()
{
    int a[5], sum = 0, i, average;
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter numbers at %d position: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    average = sum / 5;
    
    printf("Average: %d",average);
}

