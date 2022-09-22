#include<stdio.h>
int is_prime(int n)

{
	int i;
	for(i=2;i<=n/2;i++)	
	{	if(n%i==0)
		return(0);
	}
	return(1);
}

int main()
{ 
	int n;
	for(n=2;n<=100;n++)
	if(is_prime(n))
		printf("\n%d is a prime number between 1-100",n);
	return(1);
	
}
