//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    double grade = 0;

    cout << "Enter informatics class grades (enter a negative number to finish):" << endl;
    while (grade >= 0) {
        cin >> grade;
        if (grade >= 7 && grade < 9) {
            cout << grade << " ";
        }
    }
    return 0;
}
