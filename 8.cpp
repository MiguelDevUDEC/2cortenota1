// Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    int numCount = 100;
    double number;
    double positiveSum = 0;
    double negativeSum = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    cout << "Enter " << numCount << " numbers:" << endl;
    for (int i = 0; i < numCount; ++i) {
        cin >> number;
        if (number > 0) {
            positiveSum += number;
            positiveCount++;
        } else if (number < 0) {
            negativeSum += number;
            negativeCount++;
        }

    }

    if (positiveCount > 0) {
        cout << "Average of positive numbers: " << positiveSum / positiveCount << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }
    if (negativeCount > 0) {
        cout << "Average of negative numbers: " << negativeSum / negativeCount << endl;
    } else {
        cout << "No negative numbers were entered." << endl;
    }
    return 0;

}