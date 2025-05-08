//
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    char itemCode;
    double unitPrice;
    int quantity;
    int totalQuantityA = 0;
    int totalQuantityB = 0;
    double totalAmountA = 0;
    double totalAmountB = 0;

    cout << "Enter item details (A/B, price, quantity), enter X to finish:" << endl;
    while (true) {
        cin >> itemCode;
        if (itemCode == 'X') {
            break;
        }
        cin >> unitPrice >> quantity;
        if (itemCode == 'A') {
            totalQuantityA += quantity;
            totalAmountA += unitPrice * quantity;
        } else if (itemCode == 'B') {
            totalQuantityB += quantity;
            totalAmountB += unitPrice * quantity;
        }
    }

    cout << "Total quantity of item A: " << totalQuantityA << endl;
    cout << "Total amount of item A: " << totalAmountA << endl;
    cout << "Total quantity of item B: " << totalQuantityB << endl;
    cout << "Total amount of item B: " << totalAmountB << endl;
    return 0;
}
