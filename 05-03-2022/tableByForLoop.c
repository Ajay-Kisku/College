#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nTable of : ");
    int tableOf;
    scanf("%d",&tableOf);

    for (int i = 1; i <= 10; i++){
        printf("\n%d X %2d = %2d",tableOf, i, tableOf*i);
        
    }
    printf("\n"); getch();
    return 0;
}