// 18. WAP to check if a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){

    // char input[201];
    // printf("\nCheck for palindrome : ");
    // gets(input);

    char input[201] = "xafdd";

    int inputLength = sizeof(input)/sizeof(input[0]);
    int actualLength = 0;

    printf("\n%d", inputLength);

    for (int i = 0; i < inputLength; i++, actualLength--){
        printf("\n%c > %c ",input[i], input[actualLength]);
        if (input[i] == '\0') break;
    }

    printf("\n-----------------------------\n");

  for (int i = 0; i < inputLength; i++, inputLength--){

        printf("\n%c > %c ",input[i], input[actualLength]);
        actualLength++;
        if (input[i] == '\0') break;
    }

    //printf("Same");
    return 0;
}