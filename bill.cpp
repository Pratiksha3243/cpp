#include<iostream>
using namespace std;
class Bill
{
   private:
          int unit;
          float bill;
          int rate;
   public:
          Bill ();
          void display();
          Bill(int u,float b,int r)
          {
             unit=u;
             bill=b;
             rate=r;
           }
};
Bill::Bill()
{
    cout<<"Enter the no.of unit:"<<endl;
    cin>>unit;
    cout<<"Enter the rate:"<<endl;
    cin>>rate;
    bill=120+unit*rate;

}
void Bill::display()
{
   cout<<bill<<endl;
}

int main()
{
   Bill b1;
   b1.display();
}
   
    
          
