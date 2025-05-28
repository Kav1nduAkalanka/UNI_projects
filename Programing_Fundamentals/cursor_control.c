#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Loading...");
    Sleep(2);
    printf("\rComplete!");

    return 0;
}