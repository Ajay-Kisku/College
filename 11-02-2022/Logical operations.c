#include <stdio.h>

int main(){
    
    //and
    printf("\nTrue and True   : %d \n",  1 && 1);
    printf("\nTrue and False  : %d \n",  1 && 0);
    printf("\nFalse and True  : %d \n",  0 && 1);
    printf("\nFalse and False : %d \n",  0 && 0);

    printf("\n--------------------------------------\n");

    //or
    printf("\nTrue or True   : %d \n",  1 || 1);
    printf("\nTrue or False  : %d \n",  1 || 0);
    printf("\nFalse or True  : %d \n",  0 || 1);
    printf("\nFalse or False : %d \n",  0 || 0);

    printf("\n--------------------------------------\n");

    // not
    printf("\nNot True  : %d \n", !1);
    printf("\nNot False : %d \n", !0);

}