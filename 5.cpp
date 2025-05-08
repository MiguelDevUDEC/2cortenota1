// Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {
    cout << "2 ";
    for (int i = 3; i <= 1000; i += 2) {
        bool is = true;
        for (int div = 3; div * div <= i; div += 2) {
            if (i % div == 0) {
                is = false;
                break;
            }
        }
        if (is) {
            cout << i << " ";
        }
    }
    return 0;
}
