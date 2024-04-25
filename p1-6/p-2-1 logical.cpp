#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"input a and b:";
	cin >>a>>b;
	c=a&&b;
	cout <<"\n"<<a<<"&&"<<b<<"="<<c;
	c=a||b;
	cout <<"\n"<<a<<"||"<<b<<"="<<c;
	return 0;
}
