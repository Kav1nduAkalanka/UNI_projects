#include <stdio.h>

void printBox(int w,int h);
int main(){

    printBox(8,5);

 return 0;   
}


void printBox(int width,int height){
    for (int i=0; i<height; i++){

        for (int j=0; j<width;j++){
          //top and bottom line
          if (i==0 || i == (height-1)){
                printf("*");
          }
          //middle lines
          else{
            if (j==0||j==(width-1)){
                printf("*");
            }

            else{
                printf(" ");
            }
            
          }          
        }
        printf("\n");
    }
    
}