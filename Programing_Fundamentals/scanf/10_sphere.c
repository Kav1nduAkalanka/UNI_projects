#include <stdio.h>
#define PI 22.0/7.0
int main(){
 double volume,r,surface;

 printf("Enter the radius: ");
 scanf("%lf",&r);

 volume = 4.0/3.0*PI*r*r*r;
 surface = 4*PI*r*r;

  printf("Volume: %lf\n",volume);
  printf("Suface Area: %lf",surface);
 return 0;   
}