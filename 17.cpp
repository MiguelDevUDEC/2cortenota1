//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter an integer greater than 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Invalid input." << endl;
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is a composite number." << endl;
    }

    return 0;
}
