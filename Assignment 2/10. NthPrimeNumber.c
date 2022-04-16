// 10. WAP to print nth prime number.

#include <stdio.h>

int main(){


    int primeNoAt;
    printf("\nnth prime number : "); // 10th , 1000th and 99999999999th.
    scanf("%d", &primeNoAt);

    int primeNoCount = 0;

    int flag = 0;

    int result = 1;

    for (int i = 1; i <= 20; i++){

        for (int j = 1; j <= i; j++){

            if (i % j == 0 ) flag++;
            if (flag > 3) {
                primeNoCount++;
                printf("\n %d, ",j);

                break;
            }
        }

    }


    if (primeNoAt == primeNoCount) printf("\nPrime number at %dth is %d",primeNoAt, result);
    
    return 0;
}