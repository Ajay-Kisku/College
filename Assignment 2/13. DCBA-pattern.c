// 13. WAP to print following pattern :

//     D D D D
//     C C C
//     B B
//     A

#include <stdio.h>

int main(){

    char letter = 'D';
    printf("\n");

    for (int i = 4; i >= 1; i--){
        for (int j = 0; j < i; j++){

            printf("%C ", letter);
        }
        printf("\n");
        letter--;
    }
    return 0;
}