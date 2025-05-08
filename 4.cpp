// Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {

    float number;
    int count = 0;
    float result = 0;

    do {
        cout << "Enter a number: ";
        cin >> number;
        if (number < 0) break;
        result += number;
        count++;
    }while (number >= 0);

    cout << "The average of the numbers is " << result / count << endl;



    return 0;
}
