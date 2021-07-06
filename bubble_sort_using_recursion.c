#include<stdio.h>

void bubbleSort(int[], int);

void main()
{
    int i, j , temp, size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter elements in array: ");
    
    for(i = 0; i < size; i++)
    {
        printf("Enter element at %d position: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    bubbleSort(a, size);
    
    printf("After sorting.........\n");
    
    for(i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}


void bubbleSort(int a[], int size)
{
    int i, j , temp;
    
    i = size;
    
    if(i > 0)
    {
        for(j = 0; j < size - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        
        bubbleSort(a, size - 1);
    }
    else
    {
        return;
    }
}
