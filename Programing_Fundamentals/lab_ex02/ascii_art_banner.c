#include <stdio.h>

void printBoarder(int,int);

int main(){
    printBoarder(5,2);

  return 0;  
}

void printBoarder(int width,int height){
    for (int i=0;i<height;i++){

        for (int j=0;j<width;j++){
            if (i==0){
                printf("*\t");
            }  
            
            else if(i==(height-1)){
                printf("\t*\t");
            }
        }

        printf("\n");
            
    }
        
}
    
