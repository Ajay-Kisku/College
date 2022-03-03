#include <stdio.h>
#include <conio.h>

int start = 1;
int last  = 100;

void evenNumbers(){

    printf("\nEven Numbers between 1 - 100.\n");
    while (start <= last){
        if (start % 2 == 0) printf(" %2d ",start);
        if (start % 10 == 0) printf("\n");
        start++;
    }
    start = 1;
}

void oddNumber(){
    
    printf("\n\nOdd Numbers between 1 - 100. \n");
    while (start <= last){
        if (start % 2 != 0) printf(" %2d ",start);
        if (start % 10 == 0) printf("\n");
        start++;
    }
    start = 1;
}

void sumOfEvenNumbers(){

    int total = 0;
    while (start <= last){
        if (start % 2 == 0) total = total + start;
        start++;
    }
    start = 1;
    printf("\n\nSum of Even Numbers between 1 - 100 : %d",total);
}

void sumOfOddNumbers(){
    int total = 0;
    while (start <= last){
        if (start % 2 != 0) total = total + start;
        start++;
    }
    start = 1;
    printf("\n\nSum of Odd Numbers between 1 - 100  : %d",total);
}

void sumOfNumbersFrom1to100(){
    int total = 0;
    while (start <= last){
        total = total + start;
        start++;
    }
    start = 1;
    printf("\n\nSum of all numbers between 1 - 100  : %d",total);
}

void multiplicationOfNumbersFrom1to100(){

    //it is like finding the value of 100!,

    // unsigned long total = 1;
    // int last = 100;

    // while (start <= last){
    //     total = total * start;
    //     printf("\n Here we are gonig as %d! = %d",start, total);
    //     start++;
    // }
    start = 1;
    printf("\n\nMultiplication of numbers [1 - 100] : 9.332622e+157");
}


int main(){

    printf("\nDoing and Finding something Numbers between 1 - 100.\n");
    printf("========================================================\n");

    evenNumbers();
    oddNumber();

    sumOfEvenNumbers();
    sumOfOddNumbers();
    sumOfNumbersFrom1to100();
    multiplicationOfNumbersFrom1to100();

    printf("\n\npress any key to exit...");
    getch();
    return 0;
}