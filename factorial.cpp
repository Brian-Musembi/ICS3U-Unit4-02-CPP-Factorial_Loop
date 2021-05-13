// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program calculates the factorial of a user input

#include <iostream>
#include <string>

int main() {
    // this function calculates the factorial of a user input

    std::cout << "This program calculates the factorial of the given "
                 "user input." << std::endl;

    // variable declarations
    int loopCounter = 1;
    int productNum = 1;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt > 0) {
            do {
                productNum = productNum * loopCounter;
                loopCounter = loopCounter + 1;
            } while (loopCounter <= userInputInt);
            // output
            std::cout << userInputInt << " factorial is "
                      << productNum << "." << std::endl;
        } else if (userInputInt == 0) {
            std::cout << "0 factorial is 1." << std::endl;
        } else {
            // output
            std::cout << userInputInt << " is not a positive integer!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing!" << std::endl;
}
