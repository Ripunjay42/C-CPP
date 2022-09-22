#include<stdio.h>
int factor(int n)
{	
	int i;
	for(i=1;i<=n;i++)
		if(n%i==0)
		{
			printf("\n %d is a factor of %d",i,n);
		}
		return 0;
}
int main()
{
	int n,result;
	printf("enter the number:");
	scanf("%d",&n);
	factor(n);
}
