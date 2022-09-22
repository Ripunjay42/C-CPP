#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*a,sum=0;
	printf("enter the number of elements:");	
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	if(a==0)
	{
		exit(0);
	}
	printf("enter elements of array:");	
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum=sum+*(a+i);
	}
	printf("\nsum=%d\n",sum);
	free(a);
	return 0;
}

