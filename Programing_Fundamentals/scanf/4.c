#include <stdio.h>

int main(){

 int num,quotient,remainder;
 printf("Enter a number: ");
 scanf("%d",&num);
 
 quotient = num/5;
 remainder = num %5;

 printf("Quotient: %d\n",quotient);
 printf("Remainer: %d",remainder);

 return 0;
}