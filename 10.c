#include<stdio.h>
void print_odd(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]%2==1)
		printf("\n%d is odd number",a[i]);
}
void print_even(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]%2==0)
		printf("\n%d is even number",a[i]);
}
void sum_avg(int a[],int n)
{
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	avg=(float)sum/n;
	printf("\nthe sum of the elements are:%d\n",sum);
	printf("\nthe average of the elements are : %f\n",avg);
	
}
void max_min(int a[],int n)
{
   
    int i, mx, mn;
	mx = a[0];
        mn = a[0];

    for(i=1; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }


        if(a[i]<mn)
        {
            mn = a[i];
        }
    }
    printf("\nMaximum element is : %d\n", mx);
    printf("\nMinimum element is : %d\n\n", mn);
}
void remove_duplicate(int a[],int *n)
{
	int i,j,k;
	for(i=0;i<*n;i++)
	{
		for(j=i+1;j<*n;)
		if(a[i]==a[j])
		{	
			for(k=j+1;k<*n;k++)
			a[k-1]=a[k];
			(*n)--;
		}

	else j++;
	}
}
int print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	  printf("  %d  ",a[i]);
}

void reverse(int a[],int n)
{
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		a[i]=a[i]^a[j];
		a[j]=a[i]^a[j];
		a[i]=a[i]^a[j];
	}
}

int main()
{
	int a[100],n,i,ch;
	printf("Enter the number of elements:");
	scanf("%d",&n);
lb:printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEntered elements are:");
	print(a,n);
	printf("\n\t\t\tMENU");
	printf("\n1.Print the even-valued elements\n");
	printf("\n2.Print the odd-valued elements\n");
	printf("\n3.Calculate and print the sum and average of the elements of array\n");
	printf("\n4.Print the maximum and minimum element of array\n");
	printf("\n5.Remove the duplicates from the array\n");
	printf("\n6.Print the array in reverse order\n");
	printf("\n7.Re-enter the array\n");
	printf("\n8.Quit the program\n");
	printf("Enter your option:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			print_even(a,n);
			break;
		case 2:
			print_odd(a,n);
			break;
		case 3:
			sum_avg(a,n);
			break;
		case 4:
			max_min(a,n);
			break;
		case 5:
			remove_duplicate(a,&n);
			print(a,n);
			break;
		case 6:
			reverse(a,n);
			print(a,n);
			break;
		case 7:
goto lb;
     break;
		default:
			return 0;
	}
	printf("\n");
}

