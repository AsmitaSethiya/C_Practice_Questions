#include<stdio.h>

void main()
{
    int i, j = 1, terms;
    
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    for(i = 1; i <= terms; i++)
    {
        if(i % 2 == 1)
        {
            printf("%d", (-1 * j));
        }
        else
        {
            printf("%d", j);
        }
        
        j += 3;
        
        printf("\n");
    }
}
