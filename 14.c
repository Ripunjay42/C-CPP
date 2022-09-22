#include<stdio.h>
float area(float radius)
{
	float ar;
	ar=3.14*radius*radius;
	printf("\narea=%f\n",ar);
}
float circum(float radius)
{
	float cir;
	cir=2*3.14*radius;
	printf("\ncircumference=%f\n",cir);
}
void main()
{
	float r;
	printf("input the radius of a circle:");
	scanf("%f",&r);
	area(r);
	circum(r);
}


