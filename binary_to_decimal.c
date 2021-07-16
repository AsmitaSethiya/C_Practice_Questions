#include<stdio.h>

int binaryToDecimal(int);

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("%d", binaryToDecimal(n));
    printf("\n");
}

int binaryToDecimal(int n)
{
    int ans = 0, x = 1, y;
    
    while(n  != 0)
    {
        y = n % 10;
        ans = ans + (x * y);
        x = x * 2;
        n = n / 10;
    }
    
    return ans;
}
