// Limits on Integer Constants
// https://docs.microsoft.com/en-us/cpp/c-language/cpp-integer-limits?view=msvc-170
// unsigned long long int = 18,446,744,073,709,551,615 

#include <stdio.h>
#include <conio.h>

int main(){

    printf("\nEnter a +ve integer.\n");
    printf("\nFactorial of : ");
    unsigned long long int userInput;
    scanf("%llu",&userInput);

    unsigned long long int result = 1;

    for (int i = 1; i <= userInput; i++){
        result *= i;
    }

    printf("\nHere we go, %llu! = %llu\n",userInput,result);
    return 0;
}