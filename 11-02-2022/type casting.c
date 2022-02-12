#include <stdio.h>

int main(){

    //Type Casting

    float x,y;
    int z;
    //implicit conversion - conversion done the program itself
    x = 5.52; y = 5.52; z = x + y;
    printf("\n%lf + %lf = %d  \n",x,y,z);
    printf("\n%lf + %lf = %lf  \n",x,y,z);


    float this = 10.87;
    int   that = 50;
    printf("\nthis is %lf. \n",this);


    //explicit conversion - convesion done by the programmer 
    printf("\nthis is now %d. \n",(int) this);
    printf("\nthis is left %lf. \n",(int) this);

    printf("\nthat is %lf",(float) that );
    printf("\nthat is %d",(float) that );

    return 0;
}