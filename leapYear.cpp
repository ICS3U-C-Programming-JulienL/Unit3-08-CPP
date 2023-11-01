// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 31, 2023
// This a program that displays indicates which years are leap years

#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    std::string userYearString;
    int userYearInt;

    // get the user year as a string
    std ::cout << "This program shows whether the year entered is a leap year."
               << std::endl;
    std::cout << "\nEnter a year: ";
    std::cin >> userYearString;

    try {
        // convert  the user age to an integer
        userYearInt = std::stoi(userYearString);

        // if the year % 4 == 0, then see if it is divisible by 100
        if (userYearInt % 4 == 0) {
            // if the year %  100 == 0, then see if it is divisible by 400
            if (userYearInt % 100 == 0) {
                // if the year % 400 == 0, then the year is a leap year.
                if (userYearInt % 400 == 0) {
                    std::cout << userYearString << " is a leap year.\n";
                } else {
                    // otherwise, the year is not a leap year
                    std::cout << userYearString << " is not a leap year.\n";
                }
            } else {
                // // otherwise, the year is a leap year
                std::cout << userYearString << " is a leap year.\n";
            }
        } else {
            // // otherwise, the year is not a leap year
            std::cout << userYearString << " is not a leap year.\n";
        }
        } catch (std::invalid_argument) {
        // if the year is not an integer, then tell them their input is invalid
        std ::cout << userYearString << " is not a valid year.\n";
    }
}
