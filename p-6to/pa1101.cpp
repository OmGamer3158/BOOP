#include<iostream>
using namespace std;
class aryan{
    int x;
    public:
    void set_x(int m){
        x=m;
    }
    int get_x(){ 
        return x;
    }
};
class om:public aryan{
    int y;
    public:
    void set_y(int n){
        y=n;
    }
    int get_y(){
        return y;
    }
};
int main(){
     om b1;
     b1.set_x(9);
    cout<<"hi";
    b1.get_x();
    return 0;
}