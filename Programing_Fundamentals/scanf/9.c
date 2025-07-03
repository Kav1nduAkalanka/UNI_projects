#include <stdio.h>

int main(){
 double volume,h,r;

  printf("Enter the height: ");
 scanf("%lf",&h);

 printf("Enter the radius: ");
 scanf("%lf",&r);
 
 volume = 22.0/7.0*r*r*h;

 printf("Volume: %lf",volume);

 return 0;   
}