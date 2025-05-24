#include <stdio.h>

void printInvoice(float a,float b,float c);

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

    printf("\n%-11s","Parts\t");
    printf(": %10.2f\n",a);

    printf("%-11s","labor\t");
    printf(": %10.2f\n",b);

    printf("%-11s","Sales tax\t");
    printf(": %10.2f\n",c);

    //lines above the total
    for(int i=0;i<5;i++){
        printf("-");
    }
    //calculate the total cost
    float total = a+b+c;

    printf("%-11s","\nTotal\t");
    printf(": %10.2f\n",total);

}