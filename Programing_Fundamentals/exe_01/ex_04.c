#include <stdio.h>

int main(){
    int unit;
    printf("enter the number of units: ");
    scanf("%d",&unit);

    if(unit>200 && unit<500){
        printf("Energy bill: %lf",unit*3.5);
    }
    else if(unit>100 && unit<200){
        printf("Energy bill: %lf",unit*2.5);
    }
    else{
        printf("Energy bill: %lf",unit*1.5);
    }

    return 0;
}