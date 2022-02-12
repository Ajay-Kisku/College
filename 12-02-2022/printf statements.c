#include <stdio.h>
#include <conio.h>

int main(){
    
    printf("\nHere we will fetch the value of a variable and its memory address.\n");
    
    int number = 5;
    printf("\nThe number is %d.\n",number);
    printf("\nThe memory address of the number is %d.\n",&number);
    
    printf("\n%d address has number %d as a value.\n", &number, number);

    printf("\nDecimal : %d, Float : %f, Char : %c, String : %s \n", 55, 4.3, 'A', "College");
    

    return 0;
}