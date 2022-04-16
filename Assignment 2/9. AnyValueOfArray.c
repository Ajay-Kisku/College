// 9. WAP to print any value of array.
#include <stdio.h>

int main(){

    int array[] = {3, 5, 6, 4, 39, 19, 90, 20, 11, 45, };

    printf("\narray[] = { ");
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        printf("%d, ",array[i]);
    }
    printf("}");

    int element;
    printf("\n\nEnter index number to get the element : ");
    scanf("%d", &element);

    printf("\nElement on index %d is %d.\n", element, array[element]);
    return 0;
}