#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string Mname;
	cout<<left<<setw(40)<<setfill('.')<<endl;
	cout<<"movie name";
	cin>>Mname;

	int ticketsold;
	cout<<left<<setw(40)<<setfill('.')<<endl;
	cout<<"number of tickets sold";
	cin>>ticketsold;

    double ga;
	cout<<left<<setw(40)<<setfill('.')<<fixed<<setprecision(2)<<endl;
	cout<<"gross amount";
	cin>>ga;
	
	double per_ga;
	cout<<left<<setw(40)<<setfill('.')<<fixed<<setprecision(2)<<endl;
	cout<<"percentage of Gross amount Donated";
	cin>>per_ga;
	cout<<endl;
	
	double amtdonated;
	cout<<"Amount donated";
	amtdonated=(ga/100)*per_ga;
	cout<<left<<setw(40)<<setfill('.')<<right<<"$"<<fixed<<setprecision(2)<<amtdonated<<endl;
	cout<<endl;
	
	double netsale;
	cout<<"Net Sale";
	netsale=ga-amtdonated;
	cout<<left<<setw(40)<<setfill('.')<<right<<"$"<<fixed<<setprecision(2)<<netsale<<endl;
	cout<<endl;
	
	return 0;

}
