#include <stdio.h>
#define RUPEE 300.34
int main(){
 double usd,total;   
 printf("Enter the amount is USD: ");
 scanf("%lf",&usd);

 total = RUPEE * usd;
 printf("\n%lf",total);


    return 0;
}