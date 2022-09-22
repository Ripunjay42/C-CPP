#include<iostream>
using namespace std;
class matrix
{
	private:
	double a[5][5];
	int r,c;
	public:
	matrix()
	{
		r=c=0;
	}
	matrix(int x)
	{
		r=x;
		c=x;
	}
	matrix(int x,int y)
	{
		r=x;
		c=y;
	}
void read_matrix()
{
	int i,j;
	cout<<"enter dimenton:";
	cin>>r>>c;
	cout<<"input elements:";
	for(i=0;i<r;i++)
		{for(j=0;j<c;j++)
			cin>>a[i][j];
		}
	
}
void display_matrix()
{
	int i,j;
	cout<<"\n elements of the matrix are:\n";
	for(i=0;i<r;i++)
		{for(j=0;j<c;j++)
			cout<<a[i][j]<<"   ";
			cout<<endl;
			cout<<endl;
		}	
	
}
matrix add_matrix(matrix &x)
{
	if(r==x.r&&c==x.c)
	{
		int i,j;
		matrix y(r,c);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				y.a[i][j]=a[i][j]+x.a[i][j];
		return y;
	}
	else return matrix(0,0);
}
matrix diff_matrix(matrix &x)
{
	if(r==x.r&&c==x.c)
	{
		int i,j;
		matrix y(r,c);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				y.a[i][j]=a[i][j]-x.a[i][j];
		return y;
	}
	else return matrix(0,0);
}
matrix mul_matrix(matrix &x)
{
	if(c==x.r)
	{
		int i,j,k;
		matrix y(r,c);
		y.r==r;
		y.c==x.c;
		for(i=0;i<y.r;i++)
		{for(j=0;j<y.c;j++)
			{
				y.a[i][j]==0;
				for(k=0;k<c;k++)
				y.a[i][j]=y.a[i][j]+a[i][k]*x.a[k][j];
			}
		}
		return y;
	}
	else return matrix(0,0);
}
matrix transpose()
{
	int i,j;
	matrix y(r,c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			{
				y.a[j][i]=a[i][j];
			}
	return y;

}
void diagonal()
{
	for(int i=0;i<r;i++)
		{
		for(int j=0;j<c;j++)
			{
				if(i!=j&&i+j+1!=r)
					a[i][j]==0;
			}
		}
}
};
int main()
{
	matrix a(5),b(5),c;
	int ch;
     lb:cout<<"\nenter the 1st matrix:\n";
	a.read_matrix();
	a.display_matrix();
	cout<<"\nenter the 2nd matrix:\n";
	b.read_matrix();
	b.display_matrix();
	cout<<"    MENU   ";
	cout<<"\n1.sum of the matrices\n";
	cout<<"\n2.defferent of the matrices\n";
	cout<<"\n3.multiplication of the matrices\n";
	cout<<"\n4.transpose of matrix 1\n";
	cout<<"\n5.reenter the matrices\n";
	cout<<"\n6.quit the program\n";
	cout<<" enter your option :";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nsum is:\n";
			c=a.add_matrix(b);
			c.display_matrix();	
			break;
		case 2:
			cout<<"\nsdifference is:\n";
			c=a.diff_matrix(b);
			c.display_matrix();
			break;
		case 3:
			cout<<"\nmultiply is:\n";
			c=a.mul_matrix(b);
			c.display_matrix();
			break;
		case 4:
			cout<<"\ntranspose is:\n";
			c=a.transpose();
			c.display_matrix();
			break;
		case 5:
	goto lb;
			break;
				default:
					return 0;
	}
	cout<<endl;
}
			
	























	


















