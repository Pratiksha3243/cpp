#include<iostream>
using namespace std;
class Shape
{
	private:
	float area;
	public:
	Shape()
	{
		area=0;
	}
	
};
class Circle:public Shape
{
	int r,area;
	public:
	void getcircle()
	{
		cout<<"radius="<<endl;
		cin>>r;
		area=3.14*r*r;
	}
	void showcircle()
	{
		cout<<"area="<<area;
	}
};
class Rectangle:public Shape
{
	int l,b,area;
	public:
	void getrect()
	{
		cout<<"length&breadth="<<endl;
		cin>>l>>b;
		area=l*b;
	}
	void showrect()
	{
		cout<<"area="<<area;
	}
};
class Square:public Rectangle
{
	public:
	void getsquare()
	{
		getrect();
	showrect();
	}
	getrect();
	showrect();
	
};
int main()
{
	char ch;
	cout<<"Circle/Rectangle/Square(c/r/s)?";
	cin>>ch;
	if(tolower(ch)=='c')
	{
		Circle c1;
		c1.getcircle();
		c1.showcircle();
		
	}
	else if(tolower(ch)=='r')
	{
		Rectangle r1;
		r1.getrect();
		r1.showrect();
	}
	else if(tolower(ch)=='s')
	{
		Square s1;
		s1.getsquare();
	}
}

