#include<iostream>
#include<conio.h>
using namespace std;
void sort(int &x,int &y)
{
	if(x>y)
	{
		int temp=x;
		x=y;
		y=temp;
	}

	
}
int main()
{
	int a,b;
	cout<<"enter valu of b and a:"<<endl;
	cin>>a>>b;
	cout<<"you enter a="<<a<<"and b="<<b<<endl;
	sort(a,b);
	cout<<"after sort a="<<a<<"and b="<<b<<endl;
	return 0;	
}
