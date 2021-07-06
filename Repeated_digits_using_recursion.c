#include<stdio.h>

void GetRepeatedDigit(int, int[]);
int CheckRepeatedDigit(int[], int, int);

void main()
{
    int i,num, k, temp, frequency[9], flag = 0;
    
    printf("Enter number to find which digits are repeated: ");
    scanf("%d", &num);
    
    temp = num;
    
    for(i = 0; i < 10; i++)
    {
        frequency[i] = 0;
    }
    
    GetRepeatedDigit(num, frequency);
    flag = CheckRepeatedDigit(frequency, 9, 0);
    
    if(flag == 0)
    {
        printf("No Repeated digits\n");
    }
    else
    {
        printf("Repeated digits are there\n");
    }
}

void GetRepeatedDigit(int num , int frequency[])
{
    int k;
    
    if(num > 0)
    {
        k = num % 10;
        frequency[k]++;
        num = num / 10;
        GetRepeatedDigit(num, frequency);
    }
    else
    {
        return;
    }
    
}


int CheckRepeatedDigit(int frequency[], int totalDigits, int flag)
{
    if(totalDigits >= 0)
    {
        if(frequency[totalDigits] > 1)
        {
            flag = 1;
            printf("%d -- > repeated %d timwes\n", totalDigits, frequency[totalDigits]);
        }
        totalDigits--;
        CheckRepeatedDigit(frequency,totalDigits,flag);
    }
    else
    {
        return flag;
    }
}
