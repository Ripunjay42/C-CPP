#include<stdio.h>
#include<string.h>
void display_address(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
		printf("\n adress of %c is %x",a[i],&a[i]);
}
void concate(char a[],char b[])
{
	int i,j;
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++,i++)
	{	
		a[i]=b[j];
	}
	a[i]='\0';
	printf("\noutput:%s",a);
}
int compare(char a[],char b[])
{
	int i;
	for(i=0;a[i]!=0&&b[i]!=0&&a[i]==b[i];i++);
	return a[i]-b[i];
}
void upper(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++)
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
}
void lower(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++)
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
}
void reverse(char a[])
{
	int  i,j;
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		a[i]=a[i]^a[j];
		a[j]=a[i]^a[j];
		a[i]=a[i]^a[j];
	}
}
int main()
{
	char a[100], b[100],*c;
	int i,result,ch;
     lb:printf("enter the 1st string :");
	scanf("%s",a);
	printf("enter the 2nd string :");
	scanf("%s",b);
	printf("\n1st string is %s \n",a);
	printf("\n2nd string is %s \n",b);
	printf("\n     MENU    \n");
	printf("\n1.print adress of the each character for string 1\n");
	printf("\n2.print adress of the each character for string 2\n");
	printf("\n3.concatenate two string without using strcat function\n");
	printf("\n4.concatenate two string using strcat function\n");
	printf("\n5.compare two strings\n");
	printf("\n6.calculate lenth of the string 1(using pointers)\n");
	printf("\n7.calculate lenth of the string 2(using pointers)\n");
	printf("\n8.convert lowercase to uppercase string 1\n");
	printf("\n9.convert uppercase to lowercase string 1\n");
	printf("\n10.reverse the string 1\n");
	printf("\n11.reenter the string\n");
	printf("\n12..quit the program\n");
	printf("enter your option :");
	scanf("%d",&ch);
	switch(ch)	
	{	
		case 1:
			display_address(a);
			break;
		case 2:	
			display_address(b);
			break;
		case 3:
			concate(a,b);
			break;
		case 4:
			strcat(a,b);
			printf("\n %s",a);
			break;
		case 5:
	
			result=compare(a,b);
			printf("different=%d\n",result);
			break;
		case 6:
			for(c=a,i=0;*c!=0;i++,c++);
			printf("lenth of the string 1 is %d\n",i);
			break;
		case 7 :
			for(c=b,i=0;*c!=0;i++,c++);
			printf("lenth of the string 2 is %d\n",i);		
			break;
		case 8:
			upper(a);
			printf("%s\n",a);
			break;
		case 9:
			lower(a);
			printf("%s\n",a);
			break;
		case 10:
			reverse(a);
			printf("\n%s\n",a);
			break;
		case 11:
	 goto lb;	
			   break;
				default:
					return 0;
	}
	printf("\n");

}
