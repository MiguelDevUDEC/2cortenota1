//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a1 = 1;
    int a2 = 2;
    int an;

    if (n == 1) {
        an = a1;
    } else if (n == 2) {
        an = a2;
    } else {
        for (int i = 3; i <= n; i++) {
            an = a1 + a2;
            a1 = a2;
            a2 = an;
        }
    }

    cout << "The " << n << "th term of the Fibonacci sequence is: " << an << endl;

    return 0;
}

