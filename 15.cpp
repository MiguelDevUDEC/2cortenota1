//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int high = 0;
    int medium = 0;
    int low = 0;
    double salary;

    for (int i = 1; i <= 50; i++) {
        cout << "Enter salary for employee " << i << ": ";
        cin >> salary;

        if (salary > 300000) {
            high++;
        } else if (salary >= 100000) {
            medium++;
        } else {
            low++;
        }
    }

    cout << "Number of employees with high salary: " << high << endl;
    cout << "Number of employees with medium salary: " << medium << endl;
    cout << "Number of employees with low salary: " << low << endl;

    return 0;
}

