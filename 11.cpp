//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    double x;
    int N;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of N (number of terms): ";
    cin >> N;

    // Part (a): Sum up to N terms
    double resultA = 1.0; // Term 0
    double term = 1.0;

    for (int i = 1; i <= N; i++) {
        term = term * x / i; // use the previous term
        resultA += term;
    }

    cout << "Result of part (a): E(x) approximated up to N = " << N << " is: " << resultA << endl;

    // Part (b): Sum until the term is smaller than a threshold E
    double E = 1e-4; // error threshold
    double resultB = 1.0;
    term = 1.0;
    int i = 1;

    while (true) {
        term = term * x / i;
        if (term < E) break;
        resultB += term;
        i++;
    }

    cout << "Result of part (b): E(x) approximated with error less than " << E << " is: " << resultB << endl;
    cout << "Number of terms used: " << i << endl;

    return 0;
}
