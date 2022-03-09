#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nThis program will tell you the prime no. between two numbers.");
    printf("\n--------------------------------------------------------------------\n\n");

    printf("From : ");
    int firstNumber;
    scanf("%d",&firstNumber);

    printf("To   : ");
    int secondNumber;
    scanf("%d",&secondNumber);

    if (firstNumber > secondNumber ){
        
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    printf("\nList of prime number in between : ");

    firstNumber++;
    secondNumber--;

    for (int i = firstNumber; i <= secondNumber; i++){
        
        int flag = 0;

        for (int j = 1; j <= i; j++){
            if (i % j == 0) flag++;
        }
            if (flag < 3) printf("%d, ",i);

    }

    printf("\b\b  \n");
    getch();
    return 0;
}