/*

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 1 2 3 4 5 6
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7 8 9
 1 2 3 4 5 6 7 8 9 10
 
*/

#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nNumbers upto for left pyramid pattern : ");
    int number;
    scanf("%d",&number);
    printf("\n");

    for (int i = 1; i <= number; i++){
        for( int j = 1; j <= i; j++){
            printf(" %d",j);
        }
        printf("\n");
    }
        
    getch();
    return 0;
}