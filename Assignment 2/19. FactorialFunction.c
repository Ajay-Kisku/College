// 19. WAP to create a function for factorial.

#include <stdio.h>

int factorialOf(int num){

    int result = 1;

    for (int i = 1; i <= num; i++){

        result *= i;

    }

    return result;
}

int main(){

    int number = 0;
    printf("\n%d! = %d\n", number, factorialOf(number));
    
    return 0;
}