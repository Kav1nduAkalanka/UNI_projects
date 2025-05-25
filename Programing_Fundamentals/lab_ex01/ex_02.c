#include <stdio.h>

void printInvoice(float,float,float);
void printLine(int);

int main(){
    float parts=0.0, labor =0.0, tax=0.0;
    
    printf("Cost for parts: ");
    scanf("%f",&parts);

    printf("Cost for labor: ");
    scanf("%f",&labor);

    printf("Sales Tax: ");
    scanf("%f",&tax);

    printInvoice(parts,labor,tax);
 return 0;
}


//print the invoice 
void printInvoice(float a,float b,float c){
    printf("\nABC Auto Repair Service Invoice\n");
    printf("\n");

    printf("%-10s: %10.2f\n","Parts",a);
    printf("%-10s: %10.2f\n","Labor",b);
    printf("%-10s: %10.2f\n","Sales tax",c);

    //line above total
    printf("%25s","--------------");
  
    //total
    float total = a+b+c;
    printf("\n%-10s: %10.2f","Total",total);

}
