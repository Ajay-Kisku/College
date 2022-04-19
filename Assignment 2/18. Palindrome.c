// 18. WAP to check if a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){

    char input[201];
    printf("\nCheck for palindrome : ");
    gets(input);

    int inputLength = sizeof(input)/sizeof(input[0]);
    int actualLength = printf(input);

    int isPallindrom = 1;
    
    for (int i = 0, j = actualLength; i < actualLength; i++,j-- ){
        if( input[i] != input[j-1]){
            isPallindrom = 0;
            break;
        }
    }

    if (isPallindrom) printf(" is a pallindrom.");
    else printf(" is not a pallindrom.");

    return 0;
}