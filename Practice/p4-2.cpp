#include<iostream>
#include<conio.h>
using namespace std;
inline double square(double c)
{
	return c*c;
}
int main()
{
	double l;
	cout<<"Enter L=";
	cin>>l;
	cout<<"Square of "<<l<<" is "<<square(l)<<endl;
	return 0;	
}
