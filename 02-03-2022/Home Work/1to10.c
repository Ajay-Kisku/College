// Printing the numbers from 1 to 10
// Sum  of  numbers  from  1  to  10 
// Multiplication of numbers from 1 to 10 

#include <stdio.h>
#include <conio.h>

void print1To10(){

    int number = 1;
    printf("\nPrinting [ 1 - 10 ] : ");
    
    while (number <= 10){
        printf("%d, ",number);
        number++;
    }
    printf("\n");
    
}

void sumOf1To10(){
    int total = 0;
    int number = 1;
    while (number <= 10){
        total+=number;
        number++;
    }
    printf("\nSum  of  numbers  from  1  to  10      : %d",total);

}

void multiplicationOf1To10(){
    int total = 1;
    int number = 1;
    while (number <= 10){
        total*=number;
        number++;
    }
    printf("\nMultiplication of numbers from 1 to 10 : %d",total);

}

int main(){

    print1To10();
    sumOf1To10();
    multiplicationOf1To10();

    printf("\n\npress any key to close...");
    getch();
    return 0;
}