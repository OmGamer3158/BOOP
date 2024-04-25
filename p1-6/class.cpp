#include<iostream>
using namespace std;
class sample{
    public:
    int a;
    void display()
    {
        cout<<"hello world!"<<endl;
        cout<<"value of a="<<a<<endl;
    }    
};
int main(){
    sample s1, s2,s3;
    s1.a = 10;
     s1.display();
    s2.a = 20;
    s2.display();
    s3.a = 30;
    s3.display();
    return 0;
}
