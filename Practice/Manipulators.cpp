#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double km,metre,centimetre,inch,feet;
	cout<<"Enter Value of km:";
	cin>>km;
	metre=km*1000;
	centimetre=metre*100;
	inch=centimetre/2.54;
	feet=inch*12;
	cout<<fixed<<setprecision(2);
	cout<<left<<setw(20)<<"Km in Metre:"<<setw(10)<<right<<metre<<endl;
	cout<<left<<setw(20)<<"Km in Centi-Metre:"<<setw(10)<<right<<centimetre<<endl;
	cout<<left<<setw(20)<<"Km in Inch:"<<setw(10)<<right<<inch<<endl;
	cout<<left<<setw(20)<<"Km in Feet:"<<setw(10)<<right<<feet<<endl;
	return 0;
}
