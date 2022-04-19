// 10. WAP to print nth prime number.

#include <stdio.h>

int isPrime(int num){

    int flag = 0;
    for (int i = 1; i <= num; i++) if(num % i == 0) flag++;

    if (flag < 3) return 1;
    else return 0;
}

int main(){

    int primeNoAt;
    printf("\nnth prime number : "); 
    scanf("%d", &primeNoAt);

    int primeNoCount = 0;
    int start = 2;
    int result = 0;

    while(primeNoAt != primeNoCount){
        if(isPrime(start)){
            primeNoCount++;
            result = start;
        }
        start++;
    }

    printf("Prime number at %dth palce is %d",primeNoAt, result);

    return 0;
}