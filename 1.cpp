//
//Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>

int main() {

    int count = 0;
    int number;
    do {
        std::cout << "Enter a number: ";
        std::cin >> number;
        count++;
    }while (number >= 0);

    std::cout << "You entered " << count << " numbers." << std::endl;

    return 0;
}
