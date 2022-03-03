#include <stdio.h>
#include <conio.h>

void menu(){
    printf("\nPress an alphabet to know wether it is a vowel or not.\n");
    printf("Press consonent \"c\" to clear the screen.\n");
    printf("Press consonent \"x\" to close the program.\n");
    printf("--------------------------------------------------------\n\n");
}

int main(){


    menu();

    while (1){

        char alphabet = getch();
        switch (alphabet){
            case 'a': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'e': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'i': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'o': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'u': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'A': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'E': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'I': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'O': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            case 'U': printf(" >> \"%c\" is a vowel.",alphabet);        break;
            default : printf("    \"%c\" is not a vowel.",alphabet);
        }


        if (alphabet == 'x') {puts("\n\nGood Bye!!!!!"); exit(1);}
        else if (alphabet == 'c') {system("cls"); menu(); }
        else printf("                                 \r ");
    }
    return 0;
}