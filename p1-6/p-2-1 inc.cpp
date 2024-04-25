#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"input a and b:";
	cin >>a>>b;
	c=b++;
	cout <<"\n"<<c<<"++"<<"="<<b;
	c=b--;
	cout <<"\n"<<c<<"--"<<"="<<b;
	c=a--; -0
	cout <<"\n"<<c<<"--"<<"="<<a;
	c=a++;
	cout <<"\n"<<c<<"++"<<"="<<a;
	return 0;
}
