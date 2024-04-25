#include<iostream>
double Sinterest(int P,int N,int R=13.5)
{
	return P*R*N/100;
}
using namespace std;
int main
{
	cout<<Sinterest(20000,3,12)<<endl;
	cout<<Sinterest(30000,90);
	return 0;
}
