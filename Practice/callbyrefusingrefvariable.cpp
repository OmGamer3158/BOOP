#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Value Before Swaping"<<"a="<<a<<"b="<<b<<endl;
	swap(a,b);
	cout<<"Value After Swaping"<<"a="<<a<<"b="<<b<<endl;
	
}
