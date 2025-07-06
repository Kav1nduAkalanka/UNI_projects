#include <stdio.h>

int main(){
    int num;

    printf("enter a number: ");
    scanf("%d",&num);

    if(num<0){
        printf("you entered: %d",num);
    }

   return 0; 
}