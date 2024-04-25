#include<iostream>
using namespace std;
    class conversion{
			float cm;
			float meter;
			float km;
			float feet;
			float inch;	  
	   public:
	void getdata(){
      	cout<<"Enter CM to convert it:"<<endl;
	cin>>cm;
		  }
		  void putdata()
		  {
		  	inch=cm/2.54;
		  	cout<<"CM into inch :"<<inch<<endl;
		   	meter=cm/100;
		  	cout<<"CM into meter:"<<meter<<endl;
		  	km=meter/1000;
		  	cout<<"CM into km :"<<km<<endl;
		  }
		  
};

int main (){
  conversion  a;
  a.getdata();
  a.putdata();
      return 0;
    }

