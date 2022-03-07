/*

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *        
 * * * * * * *      
 * * * * * * * *    
 * * * * * * * * *  
 * * * * * * * * * *

*/
#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nEnter no. of stars for height for left pyramid : ");
    int stars;
    scanf("%d",&stars);
    printf("\n");

    for (int i = 1; i <= stars; i++){
            for( int j = 1; j <= i; j++){
                printf(" *");
            }
            printf("\n");
    }
        
    getch();
    return 0;
}