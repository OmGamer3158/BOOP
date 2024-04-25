#include<iostream>
#include<conio.h>
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
	cout<<"enter valu of b and a:"<<endl;
	cin>>a>>b;
	cout<<"you enter a="<<a<<"and b="<<b<<endl;
	
	swap(a,b);
	
	cout<<"after swap a="<<a<<"and b="<<b;
	return 0;
}
