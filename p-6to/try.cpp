#include <iostream>
using namespace std;
class test{
    int code;
    static int count;
    public:
    test(){
        code = ++count;
        cout << "constructor is called " <<code <<endl;
    }
    
    ~test(){
        cout << "destructor is called " <<code <<endl;
    }

};
int test::count;
int main(){
    cout <<"started " <<endl;
    test t1;
    return 0;

}