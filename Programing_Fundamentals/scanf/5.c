#include <stdio.h>

int main(){
 int input;
 printf("Enter the number of seconds: ");
 scanf("%d",&input);
 int hrs,min,sec;
 hrs = input /3600;
 min = (input%3600)/60;
 sec = input % 60;

printf ("%d hour(s), %d minute(s), %d second(s)",hrs,min,sec);
 return 0;    
}