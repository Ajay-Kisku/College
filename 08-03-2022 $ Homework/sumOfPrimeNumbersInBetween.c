#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nThis program will tell the sum of the prime no. between two numbers.");
    printf("\n--------------------------------------------------------------------\n\n");

    printf("From : ");
    int firstNumber;
    scanf("%d",&firstNumber);

    printf("To   : ");
    int secondNumber;
    scanf("%d",&secondNumber);

    int total = 0;

    if (firstNumber > secondNumber ){
        
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    firstNumber++;
    secondNumber--;

    for (int i = firstNumber; i <= secondNumber; i++){

        int flag = 0;

        for (int j = 1; j <= i; j++){
            if (i % j == 0) flag++;
            if (flag > 3) break;
        }
        
        if (flag < 3) total += i;

    }

    printf("\nSum Total : %d\n",total);

    getch();
    return 0;
}