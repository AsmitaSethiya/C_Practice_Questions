#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i, size, count = 0;
    
    printf("Enter a size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter 1's and 0's only\n");
    
    for(i = 0; i < size; i++)
    {
        printf("Enter value at %d position: ", i+1);
        scanf("%d", &a[i]);
        
        if(!(a[i] == 0 || a[i] == 1))
        {
            printf("Plese enter either 0 or 1\n");
            exit(0);
        }
    }
    
    for(i = 0; i < size; i++)
    {
        if(a[i] == 0)
        {
            count++;
        }
    }
    
    for(i = 0; i < size; i++)
    {
        if(i < count)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
        }
    }
    
    for(i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
