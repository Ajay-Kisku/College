#include <stdio.h>

int main(){

    printf("\nAddition program for two numbers.\n");

    float num1, num2, total;
    printf("\nEnter first number  : ");
    scanf("%f",&num1);

    printf("\nEnter second number : ");
    scanf("%f",&num2);

    total = num1 + num2;
    printf("\n%.2f + %.2f = %.2f \n", num1, num2 , total);

    return 0;
}