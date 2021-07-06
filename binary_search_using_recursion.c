#include<stdio.h>

void sort(int[] , int);

void binaryserach(int, int, int[], int);

void main()
{
    int i, size, searchno;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter array elements: ");
    
    for(i = 0; i < size; i++)
    {
        printf("Enter element at %d position: ", i+1);
        scanf("%d", &a[i]);
    }
    
    sort(a, size);
    
    printf("Sorted array is: \n");
    
    for(i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    
    printf("\nEnter element to be searched: ");
    scanf("%d", &searchno);
    
    binaryserach(1, size, a, searchno);
}

void sort(int a[], int size)
{
    int i, j, temp;
    
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void binaryserach(int low, int high, int a[], int searchno)
{
    int mid;
    
    if(low > high)
    {
        printf("Search is not successful\n");
        return;    
    }
    
    mid = (low+high) / 2;
    
    if(a[mid] == searchno)
    {
        printf("Search successful\n");
        return;
    }
    else if(searchno < a[mid])
    {
        binaryserach(low, mid - 1, a, searchno);
    }
    else if(searchno > a[mid])
    {
        binaryserach(mid + 1, high, a, searchno);
    }
}
