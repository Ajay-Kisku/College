#include <stdio.h>
#include <conio.h>

int main(){


    printf("\nThis program will tell you if your number is a prime no. or not.");
    printf("\n--------------------------------------------------------------------\n\n");

    printf("Enter a +ve integer : ");
    int userInput;
    scanf("%d",&userInput);

    int flag = 0;

    for (int i = 1; i <= userInput; i++){

        if (userInput % i == 0) flag++;
        if (flag > 3) break;
    }

    printf("\n");

    if (flag < 3) printf("Your number is a prime number.");
    else printf("Sorry, your number is not a prime number.");

    printf("\n");
    getch();
    return 0;
}