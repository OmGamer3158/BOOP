#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else {
        int isPrime = 1;
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
    
    return 0;
}
