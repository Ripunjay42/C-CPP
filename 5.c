// 5. Write a function that checks whether a given string is Palindrome or not. Use this function to
// find whether the string entered by user is Palindrome or not. 
#include<stdio.h>
#include<string.h>
int palindrome(char str1[])
{
	int i, lenth;
	int flag =0 ;
	
	lenth=strlen(str1);
	
	for(i=0;i<lenth;i++)
		{	
			if(str1[i]==str1[lenth-i-1])
			
			flag++;
				
		}
	if (flag==i)
	{
		printf("%s is  a palindrome ",str1);
	}
	else
	{ 
		printf("%s is not a palindrome ",str1);
	}
	return 0;
}
int main()
{
	char str1[20];
	printf("enter a string:");
	scanf("%s",str1);
	palindrome(str1);
	return 0;
}
	
