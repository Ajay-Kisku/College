#include <stdio.h>
#include <conio.h>

float firstNumber,secondNumber;

void userInputs(){

    printf("\nEnter first number  : ");
    scanf("%f",&firstNumber);

    printf  ("Enter second number : ");
    scanf("%f",&secondNumber);

}

void sum() {
    printf("\n%.2f + %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber+secondNumber);
}

void subtract() {
    printf("\n%.2f - %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber - secondNumber);
}

void multiply() {
    printf("\n%.2f x %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber * secondNumber);
}

void modulus() {
    printf("\n%2d  %%  %2d  =  %d\n",(int)firstNumber,(int)secondNumber,((int)firstNumber % (int)secondNumber));
}


void divide() {
    if (secondNumber == 0) puts("\nDivision with zero is not possible. We don\'t do that here.");
    else printf("\n%.2f / %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber / secondNumber);
}


int main(){

    puts("\nHere we are doing arithematic operations with the help of functions with two operands.");
    userInputs();
    sum();
    subtract();
    multiply();
    modulus();
    divide();

    getch();
    return 0;
}

