#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a three-digit positive number N: ";
    cin >> N;

    int digit1 = N / 100;
    int digit2 = (N / 10) % 10;
    int digit3 = N % 10;

    int evenCount = 0;
    if (digit1 % 2 == 0) {
        evenCount++;
    }
    if (digit2 % 2 == 0) {
        evenCount++;
    }
    if (digit3 % 2 == 0) {
        evenCount++;
    }

    cout << "Digits of the number " << N << " separated: " << digit1 << ", " << digit2 << ", " << digit3 << endl;
    cout << "Count of even digits: " << evenCount << endl;

    return 0;
}