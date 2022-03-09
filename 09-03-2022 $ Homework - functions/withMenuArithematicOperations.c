#include <stdio.h>
#include <conio.h>

float firstNumber,secondNumber;

void menu(){
    printf("\nChoose an arithematic operation to proceed.\n");
    printf("Waiting...");
    char choice = getch();
    
    printf("\n");

    switch (choice){
        case '+': sum();        break;
        case '-': subtract();   break;
        case '*': multiply();   break;
        case '/': divide();     break;
        case '%': modulus();    break;
        case 'c': system("cls"); break;
        case 'x': puts("\nBye!!!");exit(1);
        case 'q': puts("\nBye!!!");exit(1);
        default:  printf("\n**We don\'t have \"%c\" as an arithematic operation.**\n",choice); break;
    }
    puts("\n-----------------------------------------------------------");
}

void userInputs(){

    printf("\nEnter first number  : ");
    scanf("%f",&firstNumber);

    printf  ("Enter second number : ");
    scanf("%f",&secondNumber);

}

void sum() {
    puts("\n>>> Addition <<<");
    userInputs();
    printf("\n%.2f + %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber+secondNumber);
}

void subtract() {
    puts("\n>>> Subtraction <<<");
    userInputs();
    printf("\n%.2f - %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber - secondNumber);
}

void multiply() {
    puts("\n>>> Multiplition <<<");
    userInputs();
    printf("\n%.2f x %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber * secondNumber);
}

void divide() {
    puts("\n>>> Division <<<");
    userInputs();
    if (secondNumber == 0) puts("\nDivision with zero is not possible. We don\'t do that here.");
    else printf("\n%.2f / %.2f = %5.2f\n",firstNumber,secondNumber,firstNumber / secondNumber);
}

void modulus() {
    puts("\n>>> Modulus <<<");
    userInputs();
    printf("\n%2d  %%  %2d  =  %d\n",(int)firstNumber,(int)secondNumber,((int)firstNumber % (int)secondNumber));
}

int main(){

    while (1) menu();

    return 0;
}

