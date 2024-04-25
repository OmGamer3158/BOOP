#include<iostream>
using namespace std;
    class employee{
			int member;
			int number;
			char name[40];
			int basic;
			int da;
			int it;
			int netsalary;	  
	   public:
	void getdata(){
          	cout<<"enter employee member :"<<endl;
	cin>>member;
		cout<<"enter employee number :"<<endl;
	cin>>number;
	cout<<"enter employee name :"<<endl;
	cin>>name;
	cout<<"enter employee basic :"<<endl;
	cin>>basic;
		cout<<"enter employee da :"<<endl;
	cin>>da;
		cout<<"enter employee it:"<<endl;
	cin>>it;
		cout<<"enter employee net salary :"<<endl;
	cin>>netsalary;
		  }
		  void putdata()
		  {
		  	cout<<"item member :"<<member<<endl;
		    cout<<"item number :"<<number<<endl;
		    cout<<"item name :"<<name<<endl;
		    cout<<"item basic :"<<basic<<endl;
		    cout<<"item da :"<<da<<endl;
		    cout<<"item it :"<<it<<endl;
		    cout<<"item net salary :"<<netsalary<<endl;
		  }
		  
};

int main (){
  employee  a;
  a.getdata();
  a.putdata();
      return 0;
    }

