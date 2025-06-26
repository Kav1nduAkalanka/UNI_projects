#include <stdio.h>

int main(){
 double cel,fah,kel;
 printf("Enter the temperature in celcius: ");
 scanf("%lf",&cel);

 fah = cel*(9/5) + 32;
 kel = cel+273.15;

 printf("\nTemperature in Farenheit: %lf",fah);
 printf("\nTemperature in Kelvin: %lf",kel);


    return 0;
}