#include<stdio.h>
int fact(int n)
{	
	int i,f=1;
	for(i=n;i>0;i--)
		f=f*i;
	return(f);
}
int main()
{
	int a,f;
	printf("enter a number :");
	scanf("%d",&a);
	f=fact(a);
	printf("%d",f);
	return(0);
}
