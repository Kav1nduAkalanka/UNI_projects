#include <stdio.h>

int main(){
    int num1,num2;

    printf("enter a number 1: ");
    scanf("%d",&num1);

    printf("\nenter a number 2: ");
    scanf("%d",&num2);

    if((num2)==0){
        printf("Cannot divide by zero");  
    }

    else if((num1%num2)==0){
        printf("%d is divisable by %d",num1,num2);
    }

    else{
        printf("%d is not divisable by %d",num1,num2);
    }

    return 0;
}    

