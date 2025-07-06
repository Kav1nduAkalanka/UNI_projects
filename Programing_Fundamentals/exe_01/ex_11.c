#include <stdio.h>

int main(){
    int cost,sell;

    printf("enter the cost: ");
    scanf("%d",&cost);

    printf("\nenter the selling price: ");
    scanf("%d",&sell);

    if(cost>sell){
        printf("loss");
    }

    else if(cost<sell){
        printf("gain");   
    }

    else{
        printf("You sold the item for the same price as your cost");
    }

    return 0;
}    

