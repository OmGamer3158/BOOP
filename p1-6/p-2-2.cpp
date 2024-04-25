#include<iostream>
using namespace std;
int main()
{
	int i,j,k=1,x=1,sp=4;
	for(i=1;i<=4;i++)
	{ 
		for(j=1;j<=sp;j++)
        {
        	cout<<" ";
		}    
		for(k=1;k<=i;k++)
		{
			cout<<x<<" ";
			x++;
		}
			cout<<"\n";
		sp--;
	}
	return 0;
}
