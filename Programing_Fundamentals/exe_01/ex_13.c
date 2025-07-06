#include <stdio.h>

int main(){
    int speed;
    printf("enter the speed: ");
    scanf("%d",&speed);

    if(speed>31 && speed<=40){
        printf("Fine: %d",speed*50);
    }
    else if(speed>40 && speed<50){
        printf("Fine: %d",speed*70);
    }
    else{
        printf("Fine: %d",speed*100);
    }

    return 0;
}