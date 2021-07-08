#include<stdio.h>

void main()
{
    int size;
    int sumo = 0, sume = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter element at %d positon: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)
        {
            sume += a[i];
        }
        else
        {
            sumo += a[i];
        }
    }
    
    printf("\nSum of even numbers in array is: %d", sume);
    printf("\nSum of odd numbers in array is: %d", sumo);
    
}
