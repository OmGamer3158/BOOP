#include<iostream>
using namespace std;
class sample{
    
    void read(){
    cout<<"value of a="<<a<<endl;
    }


    public:
    
    int a;
    void write()
    {
        cout<<"hello world!"<<endl;
    }    
    void update(){
        read();
    }
};
int main(){
    sample s1, s2;
    s1.a = 10;
    s1.write();
    s1.update();
    s2.a = 20;
    s2.write();
    s2.update();
    return 0;
}
