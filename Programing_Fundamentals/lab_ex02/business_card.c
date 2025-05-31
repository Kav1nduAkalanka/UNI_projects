#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBox(int,int);
int main()
{
    printBox(40,5);
    return 0;
}
void printBox(int width,int height)
{
    for(int i=0;i<height;i++)
    {

        for(int j=0;j<width;j++)
        {
            if(i==0 || i==(height-1))
            {

                if(j==0||j==(width-1))
                {
                    printf("+");
                }
                else
                {
                    printf("-");
                }
            }
            else if(j==0 || j==(width-1)){
                 printf("|");
            }
            else if(j==2&& i==1){
                char str1[]="Jhon Doe";
                printf("%s",str1);
                j+=(strlen(str1)-1);

            }
            else if(j==2&& i==2){
                char str2[]="Future Software Engineer";
                printf("%s",str2);
                j+=(strlen(str2)-1);

            }
            else if(j==2&& i==3){
                char str3[]="C is the foundation!";
                printf("%s",str3);
                j+=(strlen(str3)-1);
                
            }
            else{
                printf(" ");
            }



        }

                 printf("\n");
    }
}