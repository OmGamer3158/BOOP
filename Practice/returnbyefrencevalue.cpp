#include<iostream>
using namespace std;
int &max(int x,int y)
{
	if(x>y){
		return x;
	}else{
		return y;
	}
}
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	max(a,b)=-1;
	cout<<a<<endl<<b;
		
}
