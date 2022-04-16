// 6. WAP to create a function for swapping two numbers.

#include <stdio.h>

void swap(float *x, float *y);

void swap(float *x, float *y){

    float temp = *x;
    *x = *y;
    *y = temp;
    printf("\nFrom sawp fx >>> num1 = %.2f and num2 = %.2f\n",*x, *y);

}


int main(){

    float num1 = 5, num2 = 10;
    printf("\nFrom main fx >>> num1 = %.2f and num2 = %.2f\n",num1, num2);

    swap(&num1, &num2);

    printf("\nFrom main fx >>> num1 = %.2f and num2 = %.2f\n",num1, num2);

    return 0;
}