// 1 to 1000 Horizontally without any space in between
// 1 to 1000 Horizontally with spaces in between 
// 1 to 1000 Vertically

#include <stdio.h>
#include <conio.h>

int countingNumber = 1;

void menu(){
        printf("\nSir, choose what to print from menu - 1, 2 or 3\n");
        printf("Press the respective number to choose from menu.\n");
        printf("Press \"x\" to close the program.\n\n");
        printf(" +----+-----------------------------------------------------+\n");
        printf(" | 1. | 1 to 1000 Horizontally without any space in between | \n");
        printf(" +----+-----------------------------------------------------+\n");
        printf(" | 2. | 1 to 1000 Horizontally with spaces in between       | \n");
        printf(" +----+-----------------------------------------------------+\n");
        printf(" | 3. | 1 to 1000 Vertically                                | \n");
        printf(" +----+-----------------------------------------------------+\n");
}

void oneTo1000_Horizontally(){
    printf("\n-------------------------------------------------------\n");
    printf("| 1 to 1000 Horizontally without any space in between | \n");
    printf("-------------------------------------------------------\n\n");

    while (countingNumber <= 1000){
        printf("%d",countingNumber);
        countingNumber++;
    }
    countingNumber = 1;
}

void oneTo1000_Vertically(){
    printf("\n----------------------------\n");
    printf("|   1 to 1000 Vertically   | \n");
    printf("----------------------------\n\n");

    while (countingNumber <= 1000){
        printf("%4d\n",countingNumber);
        countingNumber++;
    }
    countingNumber = 1;
}

void oneTo1000_HorizontallyWithSpace(){
    printf("\n-------------------------------------------------------\n");
    printf("|    1 to 1000 Horizontally with spaces in between    | \n");
    printf("-------------------------------------------------------\n\n");
    while (countingNumber <= 1000){
        printf("%d ",countingNumber);
        countingNumber++;
    }
    countingNumber = 1;
}

int main(){

while (1){
        system("cls");
        menu();
        char choice = getch();
        system("cls");
        if (choice == '1') oneTo1000_Horizontally();
        else if (choice == '2') oneTo1000_HorizontallyWithSpace();
        else if (choice == '3') oneTo1000_Vertically();
        else if (choice == 'x' || choice == 'X') exit(1);
        else system("cls");
        printf("\n\npress any key to go back to menu...");
        (getch() == 'x') ? exit(1): printf("");
}

    return 0;
}