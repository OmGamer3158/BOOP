#include <iostream>
using namespace std;

int main() {
	double average = 0;
    int size = 10;
    int numbers[size];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
	average=sum/size;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
