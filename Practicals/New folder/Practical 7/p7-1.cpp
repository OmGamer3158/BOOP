a#include<iostream>

using namespace std;

class test{
	static int count;
	public:
		static void incr(){
			count++;
		}
		static void display(){
			cout<<"Count is "<<count<<endl;
		}
};
int test::count=0;

int main(){
	test::display();
	
	test::incr();
	test::incr();
	test::incr();
	
	test::display();
}
