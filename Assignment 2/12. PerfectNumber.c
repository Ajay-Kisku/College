// 12. WAP to check number ? perfect or not.
// Ex : 6 has divisior 1,2 and 3 and 1+2+3 = 6, so 6 is a perfect no.

//print 10 perfect numbers. or n perfect numbers.

#include <stdio.h>

int main(){

    printf("\nEnter to check if your number is perfect of not? : ");
    int input;
    scanf("%d", &input);

    int additionOfDivisior = 0;

    for (int i = 1; i < input; i++){

        if (input % i == 0){
            
            additionOfDivisior += i;

        }
    }

    if(additionOfDivisior == input) printf("\n>> %d is a perfect number.",input);
    else  printf("\n%d is not a perfect number.",input);

    printf("\n");

    return 0;
}