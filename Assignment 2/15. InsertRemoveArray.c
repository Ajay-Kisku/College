// 15. WAP to insert and remove any number in an array.
#include <stdio.h>
#include <conio.h>
#include <windows.h>

//this programme's table is good for 3 digit long numbers
//insert and update are two different things
//if a value is there let it not be inserted by (i)nsert function

int main(){

    int array[10] = {5, 10, 15, 0, 25, 0, 200, 500, 0, 0};
    printf("\nPress 'q' to quit the program\n");
    printf("\nHere we have an intger data-type array of 8 elements and it can store upto 10 elements.");

    printf("\nUse the program as (h)istory mode or (s)tandard mode : ");
    char programMode = getch();

    repeat:
    printf("\n\n+-----------------------------------------------------------------------+");

        printf("\n| Elements : |");
        for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){

            if(array[i] == 0) printf("%s | ", "   ");
            else printf("%3d | ", array[i]);
        }

        printf("\n|------------|----|-----|-----|-----|-----|-----|-----|-----|-----|-----|");

        printf("\n| Indexing : |");
        for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
            printf("%3d | ", i);
        }

    printf("\n+-----------------------------------------------------------------------+");

        printf("\n\n(i)nsert or remove by [ inde(x) or (e)lement ] : ");
        char choice = getch();
        
        printf("\r");

        if (choice == 'i'){
            printf("Enter as ( element index ) to insert in the array    : ");
            int element, index;
            scanf("%d %d", &element, &index);

            if( index > 9){
                printf("We don't have \"%d\" index, so we can not insert it.",index);

            }else if (index > 9 || array[index] == element){
                printf("Actually it is already there.");
            
            }else if(array[index] != 0){
                printf("Element can't be inserted as it has already an element.");
                printf("\nYou need to use updation feature. Comming Soon.");

            }else array[index] = element;

        }else if (choice == 'e'){
            printf("Enter an (element) to remove it from the array       : ");
            int element;
            scanf("%d", &element);

            int ifElementfound = 0;

            for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){

                if(array[i] == element) {
                    ifElementfound = 1;
                    array[i] = 0;
                }
            }

            if(!ifElementfound) printf("There is no element as \"%d\" in the array.", element);

        }else if (choice == 'x'){
            printf("Enter (index) number to remove element from the array : ");
            int index;
            scanf("%d", &index);
            
            if( index > 9){
                printf("We don't have \"%d\" index",index);

            }else array[index] = 0;

        }else if (choice == 'q' || choice == 127){
            printf("Bye Bye...                                                    ");
            exit(1);

        }else{
            printf("INVALID CHOICE                                                ");
            goto repeat;
        }

    if (programMode == 's') system("cls");
    goto repeat;

    return 0;
}