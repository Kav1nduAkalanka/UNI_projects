#include <stdio.h>

int main(){
    int num;

    printf("enter a number: ");
    scanf("%d",&num);

    if(num%2==0){
        printf("number %d is even.",num);
    }

    else{
        printf("number %d is odd.",num);   
    }

    return 0;
}