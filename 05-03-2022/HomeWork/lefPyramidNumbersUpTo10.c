/*

 1
 2 3
 4 5 6
 7 8 9 10
 
*/

#include <stdio.h>
#include <conio.h>

int main(){

    int a = 1;
    printf("\n");

    for (int i = 1; i <= 4; i++){

        for (int j = 1; j <= i ; j++){

            printf(" %d",a); 
            a++;
        }
        printf("\n");

    }
        
    getch();
    return 0;
}