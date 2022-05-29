// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: May 2022
// This program finds the largest and smallest numbers

#include <iostream>
#include <string>


main() {
    // this function finds the largest and smallest numbers
    int integer;
    int starting;
    int counter = 1;
    int amount;
    int biggest;
    int smallest;
    std::string startingAsString;
    std::string amountAsString;
    std::string integerAsString;

    // input
    std::cout << "Enter how many numbers you will input (ex: 4): ";
    std::cin >> amountAsString;
    try {
        amount = std::stoi(amountAsString);
        // process & output
        std::cout << "Enter an integer: ";
        std::cin >> startingAsString;

        try {
            starting = std::stoi(startingAsString);
            biggest = starting;
            smallest = starting;
            while (amount > counter) {
                std::cout << "Enter an integer: ";
                std::cin >> integerAsString;

                try {
                    integer = std::stoi(integerAsString);
                    counter = counter + 1;
                    if (integer > biggest) {
                        biggest = integer;
                    } else if (integer < smallest) {
                        smallest = integer;
                    }
                } catch (std::invalid_argument) {
                    std::cout << "That was not a valid integer.\n";
                }
            }
        } catch (std::invalid_argument) {
            std::cout << "That was not a valid integer.\n";
        }
    std::cout << "\nThe largest number is " << biggest << std::endl;
    std::cout << "\nThe smallest number is " << smallest << std::endl;
    } catch (std::invalid_argument) {
                std::cout << "\nThat was not a valid integer.\n";
    }
    std::cout << "\nDone";
}
