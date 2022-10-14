// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on : October 11, 2022
// This program asks the user for a number (1-12) and then display
// the corresponding month

#include <iostream>

int main() {
    // Initialize Variable
    int userMonth;

    // Displays instructions
    std::cout << "Please a number that corresponds"
    << " to a month (ex. 3 for March)" << std::endl;

    // Asks user for a number that corresponds to a month
    std::cout << "Enter a month (1-12): ";
    std::cin >> userMonth;

    // Displays the month based of the month number (that the user inputted)
    switch (userMonth) {
        case 1:
        std::cout << userMonth << " represents January. " << std::endl;
        break;

        case 2:
        std::cout << userMonth << " represents February. " << std::endl;
        break;

        case 3:
        std::cout << userMonth << " represents March. " << std::endl;
        break;

        case 4:
        std::cout << userMonth << " represents April. " << std::endl;
        break;

        case 5:
        std::cout << userMonth << " represents May. " << std::endl;
        break;

        case 6:
        std::cout << userMonth << " represents June. " << std::endl;
        break;

        case 7:
        std::cout << userMonth << " represents July. " << std::endl;
        break;

        case 8:
        std::cout << userMonth << " represents August. " << std::endl;
        break;

        case 9:
        std::cout << userMonth << " represents September. " << std::endl;
        break;

        case 10:
        std::cout << userMonth << " represents October. " << std::endl;
        break;

        case 11:
        std::cout << userMonth << " represents November. " << std::endl;
        break;

        case 12:
        std::cout << userMonth << " represents December. " << std::endl;
        break;

        // Handling in the event of an Error Case
        default:
        std::cout << "Error. " << userMonth << " does not represent a month.\n";
    }
}
