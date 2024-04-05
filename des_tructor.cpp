#include<iostream>
using namespace std;
class abc
{
	public:
		abc()
		{
			cout<<"constructor called";
		}
		~abc()
		{
			cout<<"distructor called";
		}
};
int main()
{
	abc a1;
	return 0;
}
