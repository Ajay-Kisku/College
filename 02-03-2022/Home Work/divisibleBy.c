// Numbers divisible by 3 and 7 between 1-10 
// Sum of divisible of 5 and 7 between 1-100

#include <stdio.h>
#include <conio.h>

void divisibleBy3And7(){

    int num = 1;

    printf("\nNumbers divisible by 3 and 7 between 1-10 : [ ");
    while ( num <= 10){
        if (num % 3 == 0 || num % 7 == 0) printf("%d, ",num);
        num++;
    }
    printf("]");

}

void divisibleBy5And7(){

    printf("\nSum of divisible of 5 and 7 between 1-100:\n");
    int num = 1;
    int sumTotal = 0;
    while ( num <= 100){
        if (num % 5 == 0 || num % 7 == 0){
            printf("%d + ",num);
            sumTotal += num;
        }
        num++;
    }
    printf("\b\b= %d",sumTotal);

}

int main(){

    divisibleBy3And7();
    puts("");
    divisibleBy5And7();
    getch();
    return 0;
}