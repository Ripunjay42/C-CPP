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

};

int main()
{
	matrix a(5),b(5),c;
	a.read_matrix();
	a.display_matrix();
	b.read_matrix();
	b.display_matrix();
	cout<<"\nsum is:\n";
	c=a.add_matrix(b);
	c.display_matrix();
	return 0;
}
