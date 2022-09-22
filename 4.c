// Write a program to compute the sum of the first n terms of the following series
// S =1-2+3-4+5…………….
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("input the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			sum=(i%2==0?sum-i:sum+i);
		}	
	printf("sum=%d\n",sum);
	return 1;
}

