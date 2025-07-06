#include <stdio.h>

int main(){
    int side[3];
    
    for(int i=0;i<3;i++){
        printf("enter the length of side %d: ",i+1);
        scanf("%d",&side[i]);
    }

    if(side[0]+side[1]<side[2]){
        printf("This is not a triangle.");
    }

    else if(side[0]==side[1] && side[1]==side[2]){
        printf("This is a equilateral triangle.");
    }

    else if(side[0]==side[1] || side[1]==side[2] || side[0]==side[2]){
        printf("The triangle is isosceles.\n");
    }

    else{
        printf("This triangle is a scalene triangle.");
    }
    
    return 0;
}