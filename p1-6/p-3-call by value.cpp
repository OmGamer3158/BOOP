#include<iostream>
#include<conio.h>
using namespace std;
int swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	cout<<"function is runig"<<endl;
	
	cout<<"after swap a="<<x<<"and b="<<y;
	
}
int main()
{
	int a,b;
	cout<<"enter valu of b and a:"<<endl;
	cin>>a>>b;
	cout<<"you enter a="<<a<<"and b="<<b<<endl;
	
	swap(a,b);
	
	return 0;
}
