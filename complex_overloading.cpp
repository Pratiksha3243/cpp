#include<iostream>
using namespace std;
class complex
{
   public:
   float real;
   float img;
    
    void setreal(float r)
    {
       real=r;
    }
    float getreal()
    {
       return real;
    }
    void setimg(float i)
    {
       img=i;
    }
    float getimg()
    {
       return img;
    }
complex operator + (const complex &c2)
  {
   complex c3;
   c3.real=real+c2.real;
   c3.img=img+c2.img;
   return c3;
  }
};
int main()
{
  complex c1,c2,c3;
  float r1,r2,i1,i2;
  cout<<"enter the real & img part of c1:";
  cin>>r1>>i1;

  cout<<"enter the real & img part of c2:";
  cin>>r2>>i2;
  
  c1.setreal(r1);
  c1.setimg(i1);
  c2.setreal(r2);
  c2.setimg(i2);
  c3=c1+c2;                                                                                                                                     
  std::cout<<"c3:"<<c3.getreal()<<"+"<<c3.getimg()<<"i"<<std::endl; 
  return 0;
}
  
