#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(){
 
    int choice,r,l;


    printf("1.circle\t 2.rectangle\t 3.triangle");
    
    switch (choice)
    {
    case 1:
        
        printf("Enter the radius of the circle: ");
        scanf("%d",&r);
        printf("Area: %lf",PI*r*r);
        break;

    case 2:
        printf("Enter the length: ");
        scanf("%d",&l);
        printf("Enter the width: ");
        scanf("%d",&r);
        printf("Area: %d",l*r);
        break;
 
    case 3:
        printf("Enter the base: ");
        scanf("%d",&l);
        printf("Enter the heigth: ");
        scanf("%d",&r);
        printf("Area: %lf",0.5*l*r);
        break;    
    default:
        printf("Invalid input");
        break;
    }

    return 0;
}