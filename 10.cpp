//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {

    int numDays = 0;
    double maxTemp, minTemp;
    double totalMaxTemp = 0, totalMinTemp = 0;
    int maxTempErrors = 0, minTempErrors = 0;

    cout << "Enter daily temperature pairs (max, min), enter 0 0 to finish:\n";
    while (true) {
        cin >> maxTemp >> minTemp;
        if (maxTemp == 0 && minTemp == 0) {
            break;
        }
        if (maxTemp < minTemp)
        {
            cout << "Error: Maximum temperature cannot be less than minimum temperature. Please re-enter" << endl;
            continue;
        }
        numDays++;
        if (maxTemp != 9) {
            totalMaxTemp += maxTemp;
        } else {
            maxTempErrors++;
        }
        if (minTemp != 9) {
            totalMinTemp += minTemp;
        } else {
            minTempErrors++;
        }
    }

    if (numDays > 0) {
        double avgMaxTemp = totalMaxTemp / (numDays - maxTempErrors);
        double avgMinTemp = totalMinTemp / (numDays - minTempErrors);
        double errorPercentage = (maxTempErrors + minTempErrors) / (2.0 * numDays) * 100.0;

        cout << "Number of days: " << numDays << endl;
        cout << "Average maximum temperature: " << avgMaxTemp << endl;
        cout << "Average minimum temperature: " << avgMinTemp << endl;
        cout << "Number of errors (9 degree temperatures): " << maxTempErrors + minTempErrors << endl;
        cout << "Error percentage: " <<  errorPercentage << "%" << endl;
    } else {
        cout << "No temperature data entered.\n";
    }

    return 0;
}
