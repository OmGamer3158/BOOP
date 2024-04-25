#include<iostream>
using namespace std;
    class conversion{
			double cm;
			double meter;
			double km;
			double feet;
			double inch;	  
	   public:
	void getdata(){	
      	cout<<"Enter kilometer to convert it:"<<endl;
	cin>>km;
		  }
		  void putdata()
		  {
		  meter=km*1000;
		  cout<<"kilometer into meters:"<<meter<<endl;
		  cm=meter*100;
		  cout<<"kilometer into cm:"<<cm<<endl;
		  feet=meter*3.28;
		  inch=cm/2.54;
		  cout<<"kilometer into inch:"<<inch<<endl;	
          }
		  };
		  

int main (){
  conversion  a;
  a.getdata();
  a.putdata();
      return 0;
    }

