#include <stdio.h>

int main(){

printf("%-5s","Subjects");
printf("%30s","Marks");

printf("\n");
for(int i=0;i<41;i++){
    printf("-");
}

printf("%-5s","Mathematics");
printf("%30s","90");
printf("%-5s","English");
printf("%30s","85");
printf("%-5s","Science");
printf("%30s","92");

return 0;
}