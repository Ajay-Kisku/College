#include <stdio.h>

void main(){

    
    puts("\nCheck if your number is divisible by 5 and 11.");
    puts("--------------------------------------------------------------");

    int input;

    printf("Enter an integer : ");
    scanf("%d",&input);

    int isDivisibleBy5and11 = (input % 5 == 0 ) &&  (input % 11 == 0 );

    printf("Result..........:: ");

    if (isDivisibleBy5and11) puts("[ Entered is divisible by 5 and 11. ]");
    else puts("[ Sorry, entered is not divisible by 5 and 11. ]");
}