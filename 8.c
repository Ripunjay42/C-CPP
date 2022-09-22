#include<stdio.h>
#define swap(x,y) (x=x^y,y=x^y,x=x^y)
int main()
{
	int a,b;
	printf("enter any two number to swap:");
	scanf("%d,%d",&a,&b);
	printf("values besore swaping--\n");
	printf("a=%d,b=%d\n\n",a,b);
	swap(a,b);
	printf("values after swaping--\n");
	printf("a=%d,b=%d\n\n",a,b);
	return 0;
}
	

