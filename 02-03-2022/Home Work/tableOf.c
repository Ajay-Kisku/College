#include <stdio.h>
#include <conio.h>

void table(){

    printf("\n\n            Table of : ");
    int number;
    scanf("%d", &number);

    //comment these below lines to get linear results and they will be like history
    system("cls");
    printf("\n\n\n");

    int i = 1;
    while (i <= 10){

        printf("          %2d  X %2d  =  %3d \n",number, i, number*i);
        i++;

    }

}

int main(){


    while (1){
        table();
    }

    return 0;
}