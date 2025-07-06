#include <stdio.h>

int main(){
    int ch;
    printf("Enter a character: ");
    scanf("%d",&ch);

    if((ch>=65 || ch<=90) || (ch>=97 || ch<=122)){
        printf("Character you entered %c is an alphabet.",(char)ch);
    }

    else{
        printf("Character you entered %c is not an alphabet.",(char)ch);
    }
   
    return 0;
}