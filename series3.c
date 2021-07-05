#include<stdio.h>

void main()
{
    int i, n;
    
    float  sum = 0, num1, diff, lastsum, seriesFirstnum;
    
    printf("Enter first number of the series: ");
    scanf("%f", &num1);
    
    printf("Enter common difference: ");
    scanf("%f", &diff);
    
    printf("Enter number of terms in the series: ");
    scanf("%d", &n);
    
    seriesFirstnum = num1;
    
    lastsum = (float)(num1 + ((n - 1) * diff));
    
    for(i = 1; i <= n; i++)
    {
        sum += seriesFirstnum;
        seriesFirstnum += diff;
    }
    
    seriesFirstnum = num1;
    
    printf("Terms present in the series are: ");
    
    for(i = 1; i <= n; i++)
    {
        if(i < n)
        {
            printf("%.2f, " , seriesFirstnum);
            seriesFirstnum += diff;
        }
        else
        {
            printf("%.2f\nSum of the series is = %.2f\n", seriesFirstnum, sum);
            seriesFirstnum += diff;
        }
    }
}

