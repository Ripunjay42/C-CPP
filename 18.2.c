#include<stdio.h>
int fibo(int n);
int main()
{
	int n ,r;
	printf("enter the nth term:");
	scanf("%d",&n);
	r=fibo(n);
	printf("%d",r);
	return(0);
}
int fibo(int n)
{
	int t1,t2,t3;
	if(n==1)	
		return(0);
	if(n==2)
		return(1);
	t1=0;
	t2=1;
	for(   ;n>2;n--)	
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	return(t3);
}
