#include<stdio.h>
void print_star(int n)
{
	int i,j;
	printf("\n");
	for(i=1;i<=n;i++)
	{ 
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
			printf("\n");

	}
}
int main()
{

	print_star(5);
	return 0;
}
