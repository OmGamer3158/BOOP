#include<iostream>
using namespace std;
class item{
	int number;
	float cost;
	public:
		void getdata();
		void putdata(){
			cout<<"Item Number:"<<number<<endl;
			cout<<"Item cost:"<<cost<<endl;
			
		}
};
void item::getdata(){
	cout<<"Enter item number:";
	cin>>number;
	cout<<"Enter item cost:";
	cin>>cost;	
}
int main()
{
	item a,b;
	a.getdata();
	b.getdata();
	a.putdata();
	a.putdata();
	return 0;
}
