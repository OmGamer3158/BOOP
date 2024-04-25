#include<iostream>
#include<conio.h>
using namespace std;
inline double area(double c)
{
	return c*c*c;
}
int main()
{
	double l;
	cout<<"enter length of cube=";
	cin>>l;
	cout<<"area of "<<l<<" length cube volume="<<area(l)<<endl;
	return 0;	
}
