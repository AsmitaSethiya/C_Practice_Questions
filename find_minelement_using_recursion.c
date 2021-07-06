#include<stdio.h>

int GetMinimumElement(int[], int, int);

void main()
{
    int i, size, min;
    
    printf("Enter size to find smallest of given numbers: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter number in arrays\n");
    
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    
    min = GetMinimumElement(a, size - 1, a[0]);
    
    printf("The smallest number is: %d",min);
}

int GetMinimumElement(int a[], int size, int min)
{
    if(size > 0)
    {
        if(a[size] < min)
        {
            min = a[size];
        }
        size--;
        GetMinimumElement(a, size, min);
    }
    else
    {
        return (min);
    }
}
