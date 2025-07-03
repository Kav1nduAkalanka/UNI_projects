#include <stdio.h>
int main(){

    double p,r,n,interest;
    printf("Enter the principle: ");
    scanf("%lf",&p);

    printf("Enter the rate of interest: ");
    scanf("%lf",&r);
    
    printf("Enter the number of years: ");
    scanf("%lf",&n);
    
    interest = (double)(p*n*r)/100;
    printf("interest: %lf",interest);
    return 0;
}