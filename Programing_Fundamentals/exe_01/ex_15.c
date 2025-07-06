#include <stdio.h>

int main(){
    int unit;
    printf("enter the number of units: ");
    scanf("%d",&unit);
    double a,b,c,d;

    if(unit>50){
       a=unit*0.5;
    }
    else if(unit>50 && unit<=150){
        b=(unit-50)*0.75;
    }
    else if(unit>150 && unit<=250){
        c=(unit-150)*1.2;
    }
    else{
        d=((unit-250)*1.5);
    }

    if(unit>250){
        printf("bill: %lf",(a+b+c+d)+(a+b+c+d)*0.2);
    }
    else{
        printf("bill: %lf",(a+b+c+d));
    }

    return 0;
}