#include<iostream>
#include<cstring>
using namespace std;
int max(int,int,int);
char max(char,char,char);
int main()
{
	cout<<"Max of int"<<max(23,40,24)<<endl;
	cout<<"Max of char"<<max("Aryan","Dhyan","Maan")<<endl;
	return 0;

}
int max(int x,int y,int z)
{
	if(x>y){
		if(x>z)
		{
			return x;
		}else{
			return z;
		}
		else
		{
			if(y>z){
				return y;
			}else{
				return z;
			}
		}
	}
}
char max(char x[10],char y[10],char z[10])
{
	strcmp(x[10],y[10],z[10]);
}

