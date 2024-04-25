#include<iostream>
#include<conio.h>
using namespace std;
float area(float r,float pi=3.14)
{
	return pi*r*r;
}
int main()
{
	float l;
	cout<<"enter redius of circle=";
	cin>>l;
	cout<<"area of "<<l<<" redius circle area="<<area(l)<<endl;
	return 0;	
}
