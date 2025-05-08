// Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int grade;
    int passedCount = 0;

    cout << "Enter grades (enter a negative number to finish):" << endl;
    while (grade >= 0) {
        cin >> grade;
        if (grade >= 5) {
            passedCount++;
        }
    }
    cout << "Number of passed students: " << passedCount << endl;
    return 0;
}
