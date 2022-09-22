//Write a program to compute the sum of the first n terms of the following series
//					S = 1+1/2+1/3+1/4+……
#include<stdio.h>
int main()
{
	int n,i;
	float sum;
	printf("input the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			sum=sum+1.0/i;
		}	
	printf("sum=%f\n",sum);
	return 1;
}

