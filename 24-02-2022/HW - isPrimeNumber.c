#include <stdio.h>

void main(){

    puts("\nCheck if your number is a prime number or not.");
    puts("-------------------------------------------------");

    int input;

    printf("Enter an integer : ");
    scanf("%d",&input);

    int isPrimeNumber = 0;

    for (int i = 1; i <= input; i++){

        if (input % i == 0) isPrimeNumber++;
            if (isPrimeNumber > 2) break;
    }

    printf("Result..........:: ");

    if (isPrimeNumber < 3) puts("[ Entered number is a prime number. ]");
    else puts("[ *Entered number is not a prime number. ]");
}