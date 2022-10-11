// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/11
// Takes user input of an integer and uses IF
// statements to determine whether the integer
// is positive, negative, or zero.

#include <iostream>

int main() {
    // Variables for the integer user input
    int integer;

    // title
    std::cout << "Integers\n";

    // user input for the guessed number
    std::cout << "Enter your integer (a whole number): ";
    std::cin >> integer;

    // if the integer is positive
    if (integer > 0) {
        std::cout << "The integer " << integer << " is positive!\n";

    // else if the integer is negative
    } else if (integer < 0) {
            std::cout << "The integer " << integer << " is negative!\n";

    // else the integer is zero
    } else {
        std::cout << "The integer " << integer << " is zero!\n";
    }
}
