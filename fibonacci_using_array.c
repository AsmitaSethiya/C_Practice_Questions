#include<stdio.h>

void main()
{
    int a[100], n;
    
    printf("Enter element of the series: ");
    scanf("%d", &n);
    
    a[0] = 0;
    a[1] = 1;
    
    for(int i = 2; i <= n - 1; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    
    printf("Fibinacci series is....\n");
    
    for(int i = 0; i <= n - 1; i++)
    {
        printf("%d\t", a[i]);
    }
}
