#include <stdio.h>

int main(){

 int input[5],i=0,sum;
 
 for(;i<5;i++){
    printf("Enter a number: ");
    scanf("%d",&input[i]);
    printf("\n");
}
for(i=0;i<5;i++){
    sum+=input[i]; 
}
 
printf("Sum: %d",sum);

    return 0;
}