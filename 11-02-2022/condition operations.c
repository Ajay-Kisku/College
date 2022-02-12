#include <stdio.h>

int main(){

    printf("\n");

    // 1 represents true and 0 represents false
    (1)? puts("First statement") : puts("Second statement");
    (0)? puts("First statement") : puts("Second statement");

    int number = 20;

    if (number==20) puts("The Number is 20");

    if (number!=20) puts("The Number is not 20");
    else printf("The number is %d\n",number);

    if (number!=20) puts("The Number is not 20");
    else if (number < 50) puts("The number is less than 50");
    else printf("The number is %d",number);

    return 0;
}