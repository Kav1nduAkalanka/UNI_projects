#include <stdio.h>

void dashedLine(int);

int main(){
    dashedLine(30);
    printf("%50s","\nEscape Sequence Meaning\n");
    dashedLine(30);

    printf("\n%-5s %s","\\\\","\\");
    printf("\n%-5s %s","\\\'","\'");
    printf("\n%-5s %s","\\\"","\"");       
    printf("\n%-5s %s","\\n","line feed & carriage return");
    printf("\n%-5s %s","\\t","Tab Characters or eight spaces");
    printf("\n%-5s %s","\\b","Erase one char from right to left");
    printf("\n%-5s %s","\\r","perform only line feed");

  return 0;  
}

//dashed line
void dashedLine(int width){
    for (;width>0;width--){
        printf("-");
    }    
}


