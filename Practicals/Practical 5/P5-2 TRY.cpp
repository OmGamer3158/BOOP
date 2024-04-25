#include<iostream>
using namespace std;
class employee{
	int number;
	int da,it,netsalary,basic;
	char name[40];
	public:
		void getdata();
		void putdata(){
			cout<<"Employee Number is:"<<number<<endl;
			cout<<"Employee Name is:"<<name[40]<<endl;
			cout<<"Employee DA is:"<<da<<endl;
			cout<<"Employee IT is:"<<it<<endl;
			cout<<"Employee Basic is:"<<basic<<endl;
			netsalary=da+it+basic;
			cout<<"Employee Netsalary is:"<<netsalary<<endl;
			
			
		}
};
void employee::getdata()
{
	cout<<"Enter Employee number:";
	cin>>number;
	cout<<"Enter Employee name:";
	cin>>name[40];	
	cout<<"Enter Employee IT is:";
	cin>>it;
	cout<<"Enter Employee DA is:";
	cin>>da;
	cout<<"Enter Employee Basic is:";
	cin>>basic;
}
int main()
{
	employee a;
	a.getdata();
	a.putdata();
	return 0;
}

