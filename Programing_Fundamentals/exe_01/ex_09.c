#include <stdio.h>

int main(){
    int mark;

    printf("enter your marks: ");
    scanf("%d",&mark);


    if(mark>=90 && mark<=100  ){
        printf("You got an A.");
    }

    else if(mark>=80 && mark<90){
        printf("You got a B.");   
    }

    else if(mark>=70 && mark<80){
        printf("You got a C");
    }

    else{
        printf("You got a D.");
    }

    return 0;
}    
