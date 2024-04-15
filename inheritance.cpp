#include<iostream>
using namespace std;
class father
{
   public:
      int prop_erty;
      int self_property;
   void get()
{
  cout<<"enter the property"<<endl;
  cin>>prop_erty;
  cout<<"enter the self property"<<endl;
  cin>>self_property;
}
void total()
{
  cout<<"total property of father"<<prop_erty+self_property<<endl;
}
};
class son:public father
{
  public:
    int sons_self_property;
    void set()
    {
      cout<<"enter the self property"<<endl;
      cin>>sons_self_property;
    }
    void put()
    {
      cout<<"son's property"<<prop_erty+self_property+sons_self_property;
    }
};
int main()
{
  son s1;
  s1.get();
  s1.total();
  s1.set();
  s1.put();
  return 0;
}
