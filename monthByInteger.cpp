// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program tells user the month based off an inputted integer

#include <iostream>
#include <string>

int main() {
    // this function tells the month based off an inputted integer

    // variables
    std::string monthString;
    int monthInt;

    // input
    std::cout << "\nEnter a month number (1 - 12): ";
    std::cin >> monthString;

    monthInt = atoi(monthString.c_str());

    // process & output
    switch (monthInt) {
        case 1 :
            std::cout << "\nJanuary" << std::endl;
            break;
        case 2 :
            std::cout << "\nFebruary" << std::endl;
            break;
        case 3 :
            std::cout << "\nMarch" << std::endl;
            break;
        case 4 :
            std::cout << "\nApril" << std::endl;
            break;
        case 5 :
            std::cout << "\nMay" << std::endl;
            break;
        case 6 :
            std::cout << "\nJune" << std::endl;
            break;
        case 7 :
            std::cout << "\nJuly" << std::endl;
            break;
        case 8 :
            std::cout << "\nAugust" << std::endl;
            break;
        case 9 :
            std::cout << "\nSeptember" << std::endl;
            break;
        case 10 :
            std::cout << "\nOctober" << std::endl;
            break;
        case 11 :
            std::cout << "\nNovember" << std::endl;
            break;
        case 12 :
            std::cout << "\nDecember" << std::endl;
            break;
        default :
            std::cout << "\nInvalid Input. Enter an integer from 1 - 12."
                  << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
