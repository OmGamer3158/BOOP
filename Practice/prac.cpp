#include <iostream>

using namespace std;
class test
{
    int code;
    static int count;

public:
    test()
    {
        code = ++count;
        cout << "Constructor is called " << code << endl;
    }
    ~test()
    {
        cout << "Destructor is called " << code << endl;
    }
};
int test::count;
int main()
{
    cout << "start" << endl;
    test t1;
    cout << "After t1 ";
    {
        cout << "inside the block " << endl;
        test t2, t3;
    }
    cout << "Outside the block " << endl;
    return 0;
}