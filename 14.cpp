//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    double capital, rate;
    double interest = 0.0;
    int months = 0;

    cout << "Enter the initial capital: ";
    cin >> capital;

    cout << "Enter the monthly interest rate (in %): ";
    cin >> rate;

    double monthlyInterest = capital * rate / 100;

    while (interest < (capital*2)) {
        interest += monthlyInterest;
        months++;
    }

    cout << "The interests will double the capital in " << months << " months." << endl;

    return 0;
}

