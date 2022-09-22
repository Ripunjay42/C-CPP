#include<stdio.h>
int print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf(" %d ",a[i]);
}
void bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		if(a[j]>a[j+1])
		{
			a[j]=a[j]^a[j+1];
			a[j+1]=a[j]^a[j+1];
			a[j]=a[j]^a[j+1];
		}
	}
}
void merger(int a[],int na,int b[],int nb,int c[], int *nc)
{
	int i,j,k;
	for(i=j=k=0;i<na&&j<nb;)
	if(a[i]<a[j])
		c[k++]=a[i++];
	else c[k++]=b[j++];
	for(	;i<na;c[k++]=a[i++]);
	for(	;j<nb;c[k++]=b[j++]);
	*nc=na+nb;
}
int main()
{
	int a[10],b[10],c[25],na,nb,nc,i,j;
	printf("input numbers of elements 1st array:");
	scanf("%d",&na);
	printf("enter the 1st array:");
	for(i=0;i<na;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,na);
	printf("\nelements of the 1st array are:\n");
	print(a,na);
	printf("\ninput numbers of elements 2nd array:");
	scanf("%d",&nb);
	printf("enter the 2nd array:");
	for(j=0;j<nb;j++)
	scanf("%d",&b[j]);
	bubble_sort(b,nb);
	printf("\nelements of the 2nd array are:\n");
	print(b,nb);
	merger(a,na,b,nb,c,&nc);
	printf("\nelements of the merged array are:\n");
	bubble_sort(c,nc);
	print(c,nc);
}
	
