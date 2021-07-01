#include<stdio.h>

void main()
{
    char choice;
    float num1, num2, result;
    
    int flag = 1;
    printf("Enter +,-,/,* for knowing the result: ");
    scanf("%c", &choice);
    
    printf("Enter a number 1: ");
    scanf("%f", &num1);
    
    printf("Enter a number 2: ");
    scanf("%f", &num2);
    
    
    switch(choice)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if(num2 == 0)
            {
              flag = 0;
            }
            else
            {
                result = num1 / num2;
            }
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Invalid choice, Please Enter valid choice\n");
            break;
    }
    
    if(flag == 1)
    {
         printf("%f %c %f = %f\n", num1, choice, num2, result);
    }
    else
    {
       printf("Please enter num2 value greater than one!"); 
    }

}
