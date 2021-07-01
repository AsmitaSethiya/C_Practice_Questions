#include<stdio.h>

void main()
{
    char choice;
    float num1, num2, result;
    
    
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
            while(num2 == 0)
            {
                printf("num 2 can't be zero Please reenter num2: ");
            
                scanf("%f", &num2);
            }
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Invalid choice, Please Enter valid choice\n");
            break;
    }
    
   
         printf("%f %c %f = %f\n", num1, choice, num2, result);

}
