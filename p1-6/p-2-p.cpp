#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double km,m,cm,inch,feet;
	cout<<setfill('*')<<setw(44)<<""<<endl<<setfill(' ');
	cout<<left<<setw(28)<<"input number of KiloMeter:";
	cin>>km;
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	feet=inch*12;
	cout<<fixed<< setprecision(2);
	cout<<left<<setw(28)<<"distance in kilometare:"<<right<<km<<endl;
	cout<<left<<setw(28)<<"distance in metare:"<<right<<m<<endl;
	cout<<left<<setw(28)<<"distance in centimetare:"<<right<<cm<<endl;
	cout<<left<<setw(28)<<"distance in inch:"<<right<<inch<<endl;
	cout<<left<<setw(28)<<"distance in feet:"<<right<<feet<<endl;
	cout<<setfill('*')<<setw(44)<<""<<endl;
	//cout<<setw(10)<<"hello";
	return 0;
}
