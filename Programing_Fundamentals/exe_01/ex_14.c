#include <stdio.h>

int main(){
    double amount;
    printf("Enter the amount: ");
    scanf("%lf",&amount);

    if(amount>5000){
        printf("total: %lf",amount*0.15);
    }
    else{
        printf("total: %lf",amount*0.1);
    }




    return 0;
}