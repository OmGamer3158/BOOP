#include<iostream>
#include<conio.h>
using namespace std;
float area(float r,float pi=3.14)
{
	return pi*r*r;
}
int main()
{
	float r;
	cout<<"enter redius of circle=";
	cin>>r;
	cout<<"area of circle with radius "<<r<<area(r)<<endl;
	return 0;	
}
