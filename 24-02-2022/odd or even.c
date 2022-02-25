#include <stdio.h>

void main(){

    puts("\nCheck if your number is odd or even.");
    puts("-------------------------------------------------");


    int input;

    printf("Enter an integer : ");
    scanf("%d",&input);

    int isEven = input % 2 == 0 ;

    printf("Result..........:: ");

    if (isEven) puts("[ Entered number is even. ]");
    else puts("[ Entered number is odd. ]");

}