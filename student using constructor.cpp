#include<iostream>
using namespace std;
class student
{
   public:
     string name;
     int age;
     bool gender;
     
     student(string n,int a,bool g)
     {
        name=n;
        age=a;
        gender=g;
     }   
     
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
   student a("Patu",20,1);
   a.printInfo();
   
  
  return 0;
}  
    