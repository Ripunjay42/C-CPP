#include<stdio.h>
int fibo(int n);
int main()
{
	int n,r;
	printf("enter the nth number:");
	scanf("%d",&n);
	if(n<0)
	printf("number is not positive");
	else r=fibo(n);	
	printf("%d",r);
	return(0);
}

int fibo(int n)

{
	if(n==1)
	   return(0);
	if(n==2)
	   return(1);
	else return(fibo(n-1)+fibo(n-2));
}
