#include <stdio.h>
#include <conio.h>

int main(){

    // printf("\nNumber of starts : ");
    // int stars;
    // scanf("%d",&stars);
    
    printf("\n");
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            printf(" *");
        }
        printf("\n");
    }
     getch();
    return 0;
}