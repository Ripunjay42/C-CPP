// 2. Write a program to reverse a number.
#include<stdio.h>
int main()
{
	int n,rev;
	printf("enter a number :");
	scanf("%d",&n);
	for(rev=0;n!=0;n=n/10)
		{
			rev=(rev*10)+(n%10);
			
		}	
	printf("reverse=%d\n",rev);
	return 1;
}

