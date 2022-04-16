// 14. WAP to print all prime numbers in accesending order.
// Ex : if number 10 then
//      2, 3, 5, 7, are the primes in accesending.


#include <stdio.h>


int isPrime(int num){


    int flag = 0;
    for (int i = 1; i < num; i++){

        if(num % i == 0) flag++;
        // if(num % i == 0) printf("%d, ", i);

        // if (flag > 4) break;
    }
    // printf("\nFalg : %d", flag);
    if (flag < 3) return 1;
    else return 0;
}

int main(){



    printf("\nShow prime numbers upto : ");
    int input;
    scanf("%d",&input);

    for (int i = 2; i < input; i++){
        if(isPrime(i)){
            printf("%d, ",i);
        }
    }
    return 0;
}