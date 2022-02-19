#include <stdio.h>

int main(){
    printf("\nQuestion No. 3 : WAP to show arithimatic operations with same variable. \n\n");

    int number = 10;
    printf("%d + %d = %d \n", number, number, number+number);
    printf("%d - %d = %d \n", number, number, number-number);
    printf("%d * %d = %d \n", number, number, number*number);
    printf("%d / %d = %d \n", number, number, number/number);
    printf("%d %% %d = %d \n", number, number, number%number);

    return 0;
}