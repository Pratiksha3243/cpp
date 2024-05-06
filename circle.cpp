#include<iostream>
using namespace std;
class Circle
{
private:
    int centerX,centerY,radius;
	float circumference,area;

public:
Circle()

	{
	centerX=0;
	centerY=0;
	radius=2;
	area=0;
	circumference=0;
	//calcArea();
	//calccircumference();
	}
Circle(int cx,int cy)
	{
	centerX=cx;
	centerY=cy;
	radius=3;
	area=0;
	circumference=0;
	//calcArea();
	//calccircumference();
	}
Circle(int cx,int cy,int r)
{
	centerX=cx;
	centerY=cy;
	radius=r;
	area=0;
	circumference=0;
	//calcArea();
	//calccircumference();
}

void calcArea()
{
	float area;
	area=3.14*radius*radius;
      cout<<"area="<<area;
}
void getarea()
{ 
	calcArea();
	
}

void calccircumference()
{
	float circumference;
	circumference=2*3.14*radius;
      cout<<"circumference="<<circumference;
}
void getcircumference()
{ 
	calccircumference();
}
};
class Line
{
	private:
	int	x1, y1, x2, y2, slope, intercept;
	public:
		int x;
		Line(int a)
		{
		x=a;	
		}
		Line()
		{
			x1=0;
			x2=0;
			y1=0;
			y2=0;
			slope=4;
			intercept=2;
		}
	public:
		bool isTangent( int x1, int x2, int y1, int y2)
		{
			slope=x2-x1/y2-y1;
			if(slope==1)
			{
				return true;
			}
			else 
			{
				return false;
			}
			
		}
		bool isTangent( int slope, int intercept)
		{
			if(slope==intercept)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool isTangent( Line tl)
		{
			if(tl.x==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
Circle obj3;
Circle obj1(2,3);
Circle obj2(5,2,6);
obj3.getarea();
obj1.getarea();
obj2.getarea();
Line obj4(8);
obj4.isTangent(obj4);
Line obj5;
obj5.isTangent(7,8,5,6);
obj5.isTangent(2,4);
}




