// 8. WAP to find the factorial of any number without recursion.
// it does not work for big numbers like 52 or 100...
#include <stdio.h>

int main(){

    int factorialOf;
    printf("\nFind Factorial of ? : ");
    scanf("%d",&factorialOf);

    int result = 1;

    if (factorialOf == 0) printf("\nAnswer = 1\n");
    else{
        for (int i = 1; i <= factorialOf; i++){
            result = result * i;
        }
        printf("\nAnswer = %d\n", result);
    }

    return 0;
}