#include <stdio.h>

int main(){
 double r,v,s;
 printf("Enter the side length of the cube: ");
 scanf("%lf",&r);
 
 v = r*r*r;
 s=6*r*r;

 printf("The volume is: %lf",v);
 printf("\nThe surface area is: %lf",s);


 return 0;
}