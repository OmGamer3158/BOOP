#include<iostream>
int area(int r,int pi=3.14)
{
	return pi*r*r;
}
int main()
{
	cout<<"Area of circle="<<area(3);
	cout<<"Area of circle="<<area(6,3.1415);
	return 0;
}
