#include <stdio.h>
#define PI 22.0/7.0

int main(){
 double volume,h,r,s,surface;

 printf("Enter the height: ");
 scanf("%lf",&h);

 printf("Enter the radius: ");
 scanf("%lf",&r);

 printf("Enter the slant height : ");
 scanf("%lf",&s);

 volume = 1.0/3.0*PI*r*r*h;
 surface = PI*r*r + PI*r*s;

  printf("Volume: %lf\n",volume);
  printf("Suface Area: %lf",surface);
 return 0;   
}