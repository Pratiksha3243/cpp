#include<iostream>
using namespace std;
class Date
{
   private:
           int date;
           int month;
           int year;
   public:
          Date ();
          void display();
          Date(int d,int m,int y)
            {
                date=d;
                month=m;
                year=y;
            }
};
Date::Date()
   {
      cout<<"Enter the date:"<<endl;
      cin>>date;
      cout<<"Enter the month:"<<endl;
      cin>>month;
      cout<<"Enter the year:"<<endl;
      cin>>year;     
   }


void Date::display()
{
  cout<<date<<"/"<<month<<"/"<<year<<"/"<<endl;
}
int main()
{
   Date d1;
   d1.display();
}
