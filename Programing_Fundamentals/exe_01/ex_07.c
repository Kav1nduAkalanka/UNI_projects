#include <stdio.h>

int main(){
    int num1,num2;

    printf("enter a number 1: ");
    scanf("%d",&num1);

    printf("\nenter a number 2: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d > %d",num1,num2);
    }

    else if(num1<num2){
        printf("%d < %d",num1,num2);   
    }

    else{
        rintf("%d = %d",num1,num2);
    }

    return 0;
}    

