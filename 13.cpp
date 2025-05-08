//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int age;
    int count = 0;

    cout << "Enter employee ages (negative number to stop): ";

    while (true) {
        cin >> age;
        if (age < 0) {
            break;
        }
        if (age > 65) {
            count++;
        }
    }

    cout << "There are " << count << " employees older than 65 years." << endl;


    return 0;
}
