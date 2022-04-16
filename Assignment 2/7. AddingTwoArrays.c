// 7. WAP to add two arrays.

#include <stdio.h>

int main(){

    //having same size array creates no problem but different size does. It print the elements of above array.
    // float you[10] = {3,4,5,};
    // float me[10]  = {5,6,0,};

    float you[10] = {3,4,5,6,3,4,3,2,1,1};
    float me[10]  = {5,6,0,5,6,3,1,8,5,0};

    float us[20];

    printf("\nSlNo. \tIndex \t you[] \t me[] ");
    printf("\n--------------------------------");

    for (int i = 0; i < sizeof(you)/sizeof(you[0]); i++){
        printf("\n%4d.\t%4d \t %.2f \t %.2f",i+1, i, you[i], me[i]);
    }

    //print the data-type of arrays
    // both shoud have same data-type to merge them

    int youLength = sizeof(you)/sizeof(you[0]);
    int meLength  = sizeof(me)/sizeof(me[0]);
    int totalLengthOfArray =  youLength + meLength ; 

    printf("\n\nTotal length of array ( you[] + me[] ) = %d", totalLengthOfArray);

    int j;
    for (j = 0; j < youLength; j++){
        us[j] = you[j];
    }

    for (j = 0 ; j < meLength; j++){
        us[ youLength + j] = me[j];
    }

    printf("\n\nThis is the finnal array us[] >>>");
    printf("\n--------------------------------------");
    for (int i = 0; i < sizeof(us)/sizeof(us[0]); i++){
        printf("\n%2d. %.2f ",i+1, us[i]);
    }

    return 0;
}