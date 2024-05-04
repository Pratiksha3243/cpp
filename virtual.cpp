#include<iostream>
using namespace std;
class Base
{
  public:
    virtual void display()
    {
      cout<<"This is dispaly function of base class"<<endl;
    }
};
class Derived1:public Base
{
  public:
    virtual void display()
    {
      cout<<"This is display function of derived class 1"<<endl;
    }
};
class Derived2:public Base
{
  public:
     void display()
    {
      cout<<"This is display function of derived class 2"<<endl;
    }
};
class Derived3:public Derived2
{
  public:
     void display()
     {
       cout<<"This is display function of derived class 3"<<endl;
     }
};

int main()
{
   Base*bptr;
   Base*bptr1;
   Derived1 d1;
   Derived2 d2;
   Derived3 d3;
   bptr=&d3;
   bptr1=&d2;
   bptr->display();
   bptr1->display();
   return 0;
}
