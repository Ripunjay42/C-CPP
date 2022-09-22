#include<stdio.h>
int gcd(int a,int b)
{
	int t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a%b==0)
		return(b);
	else return(gcd(b,a%b));
}
int main()
{
	int a,b,r;
	printf("enter the two numbers:");
	scanf("%d,%d",&a,&b);	
	r=gcd(a,b);
	printf("%d",r);
}

