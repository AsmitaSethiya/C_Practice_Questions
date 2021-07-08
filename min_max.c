#include<stdio.h>

void main()
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    for(int i = 0; i <= size - 1; i++)
    {
        printf("Enter element at %d position: ", i + 1);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    
    for(int i = 0; i <= size - 1; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        
        if(max < a[i])
        {
            max = a[i];
        }
    }
    
    printf("\nMinimum element in array is: %d", min);
    printf("\nMaximum element in array is: %d", max);
}
