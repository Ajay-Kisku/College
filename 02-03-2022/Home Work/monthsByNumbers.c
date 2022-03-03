#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){

    //name of months as digits from 1 - 12
    printf("\n+--------------------------------------+");
    printf("\n| Get the name of correspondence month |\n");
      printf("+--------------------------------------+\n");


    while (1){
        //enter 'x' , a character/alphabet and it will be infinte loop
        printf("\nEnter an integer between [1-12] : ");
        int digit;
        scanf("%d",&digit);

        printf(">>> ");
        switch (digit){
            case 1 : printf("January");     break;
            case 2 : printf("February");    break;
            case 3 : printf("March");       break;
            case 4 : printf("April");       break;
            case 5 : printf("May");         break;
            case 6 : printf("June");        break;
            case 7 : printf("July");        break;
            case 8 : printf("August");      break;
            case 9 : printf("September");   break;
            case 10 : printf("October");    break;
            case 11 : printf("November");   break;
            case 12 : printf("December");   break;
            default : printf("Not we don't have such character/number related with months."); break;
        }

        printf(" <<<\n"); 
    }

    getch();
    return 0;
}