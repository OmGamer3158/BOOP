#include<iostream>
#include<conio.h>
using namespace std;
int &max(int &x,int &y,int &z)
{
	if(x>y)
	{
		if(x>z)
		{
			return x;
		}
		else{
			return z;
		}	
	}
	else{
		
	}
	
	
	
	
}
int main()
{
	int a,b;
	cout<<"enter valu of b and a:"<<endl;
	cin>>a>>b;
	cout<<"you enter a="<<a<<"and b="<<b<<endl;
	max(a,b,c)=-1;
	cout<<a<<endl<<b<<endl<<c;
	return 0;	
}
