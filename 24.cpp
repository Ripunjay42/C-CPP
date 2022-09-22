#include <iostream>

using namespace std;
class Box
{
    int l,b,h;
public:
    Box()
    {
        l=b=h=0;
    }
    Box(int x)
    {
         l=b=h=x;

    }
    Box(int x,int  y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    int sa()
    {
        int a=2*l*b+2*b*h+2*l*h;
        return a;
    }
    int vol()
    {
        int v=l*b*h;
        return v;
    }
    Box  operator ++()
    {
        ++l;++b;++h;
        return *this;
    }
    Box operator ++(int)
    {
        Box t;
        t.l=l;
        t.b=b;
        t.h=h;
        l++;b++;h++;
        return t;
    }
    Box operator --()
    {
        --l;--b;--h;
        return *this;
    }
    Box operator --(int)
    {
	Box t;
	t.l=l;
	t.b=b;
	t.h=h;
        l--;b--;h--;
        return t;
    }
    int  operator ==(Box x)
    {
        if((l==x.l && b==x.b && h==x.h)||
           (l==x.b  && b==x.l && h==x.h)||
           (l==x.h && b==x.l && h==x.b)||
           (l==x.l && b==x.h && h==x.b)||
           (l==x.h && b==x.b && h==x.l)||
           (l==x.b && b==x.h && h==x.l))
        {
            return 1;
        }
        else return 0;
    }
    Box operator =(Box x)
    {
        this->l=x.l;
        this->b=x.b;
        this->h=x.h;
        return (*this);
    }
    int is_cube()
    {
        if(l==b&&b==h)
        return 1;
        else return 0;

    }
    void display()
    {
        cout<<"length:"<<l<<"  breath:"<<b<<"  height:"<<h;

    }
     void read()
     {
	cin>>l>>b>>h;
     }

};
int main()
{
    Box x,y,p,q;
    cout<<"\n enter l,b,h of box x:\n";
    x.read();
    cout<<"\nenter the l,b,h of box y:\n";
    y.read();
    cout<<"\nsa of box x is:"<<x.sa()<<endl;
    cout<<"\nvolume of box x is:"<<x.vol()<<endl;
    cout<<"\n post increment p=x++:\n";
    p=x++;
    x.display();
    cout<<endl<<"obj p\n";
    p.display();
    cout<<"\n post decrement q=y-- \n";
    q=y--;
    y.display();
    cout<<endl<<"obj q\n";
    q.display();
    if(x==y)
        cout<<"\nobject  x and y are same\n";
    else cout<<"\nobject  x and y  are not same\n";
	cout<<"\nassign x to p\n";
	p=x;
	p.display();
	if(x.is_cube())
		cout<<"\nobject x is a cube\n";
	else cout<<"\nobject x is not a cube\n";

}
