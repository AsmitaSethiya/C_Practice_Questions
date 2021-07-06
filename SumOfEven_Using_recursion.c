#include<stdio.h>

void SumOFEven(int[],int, int);

void main()
{
    int num, i, a[10], sum = 0;
    
    printf("Enter the no of elements in array: ");
    scanf("%d", &num);
    
    printf("Enter array element\n");
    
    for(i = 0; i < num; i++)
    {
        printf("Enter element at %d position: ", i+1);
        scanf("%d", &a[i]);
    }
    
    SumOFEven(a, num - 1, sum);
}

void SumOFEven(int a[], int num, int sum)
{
    if(num >= 0)
    {
        if((a[num]) % 2 == 0)
        {
            sum += (a[num]);
        }
        
        SumOFEven(a, num - 1, sum);
    }
    
    else
    {
        printf("Sum = %d\n", sum);
    }
}
