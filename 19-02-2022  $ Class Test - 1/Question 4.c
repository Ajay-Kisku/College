#include <stdio.h>
#include <math.h>

void main(){
	printf("\nQuestion No. 4 : WAP to find the area of a triangle. \n");
    printf("======================================================\n");

	float side1,side2,side3,semiPerimeter,area;

	printf("\nEnter the sides of your triangle -\n\n");

	printf(" Side 1 : ");
	scanf("%f",&side1);

	printf(" Side 2 : ");
	scanf("%f",&side2);

	printf(" Side 3 : ");
	scanf("%f",&side3);

	// printf("\n Side 1 = %.2f\n Side 2 = %.2f\n Side 3 = %.2f\n",  side1, side2, side3);

	int isTriangle = (side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2);

	if (!isTriangle) printf("\n***These given sides can not form a triangle.***");
	else{

		semiPerimeter = (side1 + side2 + side3)/2;

		area = sqrt(semiPerimeter*(semiPerimeter - side1)*(semiPerimeter - side2)*(semiPerimeter - side3));

		printf("\nArea = %.2f sq. units",area);
	}
	printf("\n");
}