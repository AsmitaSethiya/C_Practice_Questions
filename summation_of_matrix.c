#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    
    printf("Enter element of first matrix....\n");
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter element at %d%d position : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter element of seconds matrix....\n");
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Enter element at %d%d position: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
   
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Summation of mateix 1 and matrix 2 is......\n");
    
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    
}
