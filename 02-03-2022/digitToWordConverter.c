#include <stdio.h>
#include <conio.h>

int main(){

    menu :
        printf("\nPress a digit and get it in words.\n");
        printf("Press \"c\" to clear the screen.\n");
        printf("Press \"x\" to close the program.\n");
        printf("-----------------------------------\n");

    again :
        printf("");
        char digit = getch();

        printf("\nYou pressed : ");
        switch (digit){

            default : printf("\"%c\" is not a digit.",digit); goto again;  break;
            case '0' : printf("Zero");    goto again;  break;
            case '1' : printf("One");     goto again;  break;
            case '2' : printf("Two");     goto again;  break;
            case '3' : printf("Three");   goto again;  break;
            case '4' : printf("Four");    goto again;  break;
            case '5' : printf("Five");    goto again;  break;
            case '6' : printf("Six");     goto again;  break;
            case '7' : printf("Seven");   goto again;  break;
            case '8' : printf("Eight");   goto again;  break;
            case '9' : printf("Nine");    goto again;  break;
            case 'c' : system("cls");     goto menu;   break;
            case 'x' : printf("\rGood Bye!!!!!!\n");   exit(1);

        }

    return 0;
}