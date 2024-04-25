#include<iostream>
using namespace std;
    class item 
	{
			int number;
			float cost;  
	   public:
          void getdata();
		  void putdata()
		  {
		  	cout<<"item number :"<<number<<endl;
		  	cout<<"item cost : "<<cost<<endl;
		  }
		  
};
void item::getdata()
{
	cout<<"enter item number :"<<endl;
	cin>>number;
		cout<<"enter item cost :"<<endl;
	cin>>cost;
}
int main (){
	
	
  item a,b;
  a.getdata();
    b.getdata();
      a.putdata();
        b.putdata();
        
        return 0;
        
		}
  
