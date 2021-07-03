#include<stdio.h>

void main()
{
    int i, n, sum = 0, num1, num2, diff, lastnum, series;
    
    printf("Enter first 2 numbers for finding common Difference: ");
    scanf("%d%d", &num1, &num2);
    
    printf("Enter last term of series: ");
    scanf("%d", &lastnum);
    
    diff = num2 - num1;
    
    series = num1;
    
    n = ((lastnum - num1)/ diff) + 1;
    
    printf("Number of terms in series is %d\n",n);
    
    for(i = 1; i <= n; i++)
    {
        sum += series;
        series +=diff;
    }
    
    series = num1;
    
    printf("Sum of the series\n");
    
    for(i = 1; i <= n; i++)
    {
        if(i < n)
        {
            printf("%d+", series);
            series += diff;
        }
        else
        {
            printf("%d = %d\n", series,sum);
            series +=diff;
        }
        
    }
}
