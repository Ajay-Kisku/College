#include <stdio.h>

int main(){

    int C = 10;
    printf("\nC    : %d\n",C);

	C++;
    printf("\nC++  : %d\n",C);

    C ++;
    printf("\nC ++ : %d\n",C);

    C			++;
    printf("\nC			++ : %d\n",C);

    ++ C;
    printf("\n++C  : %d\n",C);

//-------------------------------------------

    C--;
    printf("\nC--  : %d\n",C);

    C --;
    printf("\nC -- : %d\n",C);

    --C;
    printf("\n--C  : %d\n",C);


	printf("\n------------------------------------------- \n");
	

    printf("\nC = %d\n",C);

    //pre increment
    printf("\n++C = %d\n",++C);
    printf("\nC = %d\n",C);

    // int D = C++ + C++;
    // printf("\nC++ + C++ = %d\n",D);

    //pre increment
    printf("\nC-- = %d\n",C++);
    printf("\nC = %d\n",C);


    // int E = C++ + C++;
    // printf("\nC++ + C++ = %d\n",E);
}