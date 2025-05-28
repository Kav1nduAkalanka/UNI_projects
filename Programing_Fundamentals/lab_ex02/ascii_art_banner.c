#include <stdio.h>

void printBox(int w,int h);

int main(){
    printBox(8,5);
  return 0;  
}

void printBox(int width,int height){
  for(int i=0;i<height;i++){
      for (int j=0; j<width;j++){
        if (i==0)
        {
         printf("*  "); 
        }
        
        if (i==(height-1))
        {
          printf("  *");
        }
        
        if (i==(height/2) && j ==(width/2)-2)
        {
          printf("Welcome to\n");
          printf("C programming");
        }
        
      }
      printf("\n");
  }
}


    
