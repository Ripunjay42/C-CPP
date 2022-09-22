#include<stdio.h>
void swap(int *x, int *y)
{
	int t;
	 t = *x;
	*x = *y;
	*y = t;
	printf("x=%d  y=%d\n", *x,*y);
}
int main()
{
	int a,b;
	printf("enter the 1st number a=");
	scanf("%d",&a);
	printf("enter the 2nd number b=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("after swaping a=%d  ,b=%d", a,b);
	return 0;
} 
