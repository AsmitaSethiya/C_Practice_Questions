#include<stdio.h>

void main()
{
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter elements in array.....\n");
    
    for(int i = 0; i <= size - 1; i++)
    {
        printf("Enter element at %d position: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    int min = a[0];
    
    for(int i = 0; i <= size - 1; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    
    printf("Minimum element in given array is: %d", min);

}
