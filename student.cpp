#include<iostream>
using namespace std;
class student
{
   public:
     string name;
     int age;
     bool gender;
     
     void printInfo()
     {
       cout<<"Name:";
       cout<<name<<endl;
       cout<<"age:";
       cout<<age<<endl;
       cout<<"gender:";
       cout<<gender<<endl;
       
       
     }  
};
int main()
{
  student arr[4];
  for(int i=0;i<4;i++)
  {
     cout<<"Name:";
     cin>>arr[i].name;
     cout<<"age:";
     cin>>arr[i].age;
     cout<<"gender:";
     cin>>arr[i].gender;
     
  }
  for(int i=0;i<4;i++)
  {
    arr[i].printInfo();
  }  
  return 0;
}  
