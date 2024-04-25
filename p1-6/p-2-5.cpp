#include <iostream>
using namespace std;
int globalVar = 10;

int main() {
    int localVar = 20;
    cout << "Local variable value: " << localVar << endl;
    cout << "Global variable value (using scope resolution operator): " << ::globalVar << endl;
    return 0;
}
