#include <stdio.h>
#include <stdlib.h>

int main(){
 
    double num1,num2;
    int op;
    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    printf("enter the number infront of the operation you want to perform.\n");
    printf("1.addition\t 2.substraction\t 3.division\t 4.multiplication\n");
    scanf("%d",&op);

    if (op==3)
    {
        if (num2==0)
        {
            printf("cannot divide by zero.");
            exit(1);
        }
        
    }
    
    
    
    
    
    switch (op)
    {
    case 1:
        printf("%lf",num1+num2);
        break;

    case 2:
        printf("%lf",num1-num2);
        break;
 
    case 3:
        printf("%lf",num1/num2);
        break;
     
    case 4:
        printf("%lf",num1*num2);
        break;    
        
    
    default:
        printf("invalid operation");
        break;
    }

    return 0;
}