#include <stdio.h>
#define PI 22.0/7.0
int main(){
 double volume,h,r,surface;

 printf("Enter the height: ");
 scanf("%lf",&h);

 printf("Enter the radius: ");
 scanf("%lf",&r);

 volume = PI*r*r*h;
 surface = 2*PI*r*h + 2*PI*r*r;

  printf("Volume: %lf\n",volume);
  printf("Suface Area: %lf",surface);
 return 0;   
}