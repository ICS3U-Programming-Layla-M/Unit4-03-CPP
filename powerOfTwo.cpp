// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 25, 2021
// This program asks the user to input a number and then
// displays the square of all numbers from 0 to that number

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // declare variables
    int counter, numberAsInt, square;
    std::string numberAsString;

    // ask the user for a whole number
    std::cout << "Enter a whole number: ";
    std::cin >> numberAsString;

    try {
        // convert from string to integer
        numberAsInt = std::stoi(numberAsString);

        if (numberAsInt < 0) {
            // check if number is negative
            std::cout << numberAsString << " is not a whole number.\n";
        } else {
            // calculate the square of the numbers in range
            for (counter = 0; counter < numberAsInt + 1; counter++) {
                square = pow(counter, 2);
                std::cout << counter << "^2 = " << square << "\n";
            }
        }
    } catch (std::invalid_argument) {
        // error message
        std::cout << numberAsString << " is not a whole number.\n";
    }
    std::cout << "\n";
    // end message
    std::cout << "Thanks for playing!";
}
