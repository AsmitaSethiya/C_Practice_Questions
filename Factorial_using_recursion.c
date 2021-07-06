#include<stdio.h>

int Getfactorial(int);

void main()
{
    int num, factorial;
    
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);
    
    factorial = Getfactorial(num);
    
    printf("%d!=%d\n", num, factorial);
}

int Getfactorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
    {
        return  num * Getfactorial(num - 1);
    }
    

}
