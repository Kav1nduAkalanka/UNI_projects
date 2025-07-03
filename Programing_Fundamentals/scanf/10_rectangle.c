#include <stdio.h>

int main(){
 double volume,h,w,l,surface;

 printf("Enter the height: ");
 scanf("%lf",&h);

 printf("Enter the width: ");
 scanf("%lf",&w);

 printf("Enter the length: ");
 scanf("%lf",&l);

 volume = l*w*h;
 surface = 21*(w+h) + 2*w*h;

  printf("Volume: %lf\n",volume);
  printf("Suface Area: %lf",surface);
 return 0;   
}