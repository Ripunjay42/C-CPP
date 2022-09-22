// 1. Write a program to print the sum and product of digits of an integer.
#include<stdio.h>
int main()
{
	int s,p,n;
	printf("enter an number :");
	scanf("%d",&n);
	for(s=0,p=1;n!=0;n=n/10)
		{
			s=s+(n%10);
			p=p*(n%10);
		}	
	printf("sum=%d\n",s);
	printf("product=%d\n",p);
	return 1;
}

