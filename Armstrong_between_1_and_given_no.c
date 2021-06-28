#include<stdio.h>

void main()
{
    int num, i, j, temp1, temp2, sum = 0;
    
    printf("Enter a number to know all Armstrong number: ");
    scanf("%d", &num);
    
    printf("Armstrong number are: ");
    
    for(int i = 1; i <= num; i++)
    {
        sum = 0;
        temp1 = i;
        temp2 = i;
        
        while(temp2 != 0)
        {
            j = temp2 % 10;
            sum += j * j * j;           // sum += pow(j,3)  to use this we hve to include header file #include<math.h>
            temp2 = temp2 / 10;
        }
        
        if(sum == temp1)
        {
            printf("%d\t", sum);
        }
    }
}
