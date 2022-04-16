// 16. WAP to find min and max value of an array.
#include <stdio.h>

int main(){

    int array[] = {4,56,4,6,2,6,1};


    int max = array[0],min = array[0];

    printf("\nArray Elements : ");
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        printf(" %d, ", array[i]);
        if (max < array[i]) max = array[i];
        if (min > array[i]) min = array[i];
    }

    printf("\nMax = %d and Min = %d\n", max, min);

    return 0;
}