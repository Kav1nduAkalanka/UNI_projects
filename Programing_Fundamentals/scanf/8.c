#include <stdio.h>

int main(){
 double base,height,area;
 

 printf("Enter the length of the base: ");
 scanf("%lf",&base);
 
 printf("Enter the heigh: ");
 scanf("%lf",&height);
 
 area = 0.5*base*height;
 printf("Area: %lf",area);

 return 0;   
}