#include<stdio.h>

void main()
{
    int choice;
    float base, height, area, width, length, radius, side;
    printf("Enter\n1 for Triangle\n2 for Rectangle\n3 for Circle\n4 for Square\n5 for Parallelogram\n");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Enter base and height of Triangle: \n");
            scanf("%f %f", &base , &height);
            
            area = (float)((base * height) / 2 );
            
            printf("Area of Triangle is: %f", area);
            break;
        case 2:
            printf("Enter width and length of Rectangle: ");
            scanf("%f %f", &width, &length);
            
            area = (float)width * length;
            printf("Area of Rectangle is: %f", area);
            break;
        case 3:
            printf("Enterr radius of Circle: ");
            scanf("%f", &radius);
            
            area = (float)3.14159 * radius * radius;
            printf("Area of Circle is:  %f", area);
            break;
        case 4:
            printf("Enter side of Square: ");
            scanf("%f", &side);
            
            area = (float)side * side;
            printf("Area of Square is: %f");
            break;
        case 5:
            printf("Enter base and height of Parallelogram: ");
            scanf("%f %f", &base, &height);
            area = (float)base * height;
            printf("Area of Parallelogram is: %f", area);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
}
