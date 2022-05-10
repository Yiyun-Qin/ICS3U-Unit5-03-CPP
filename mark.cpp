// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, calculating the area of the triangle

#include <iostream>
#include <string>
#include <iomanip>

int mark(std::string levelInput) {
    // This function calculates the area of the triangle
    int mark;

    // process & output
    if (levelInput == "4+") {
        mark = 97;
    } else if (levelInput == "4") {
        mark = 90;
    } else if (levelInput == "4-") {
        mark = 83;
    } else if (levelInput == "3+") {
        mark = 78;
    } else if (levelInput == "3") {
        mark = 74;
    } else if (levelInput == "3-") {
        mark = 71;
    } else if (levelInput == "2+") {
        mark = 68;
    } else if (levelInput == "2") {
        mark = 64;
    } else if (levelInput == "2-") {
        mark = 61;
    } else if (levelInput == "1+") {
        mark = 58;
    } else if (levelInput == "1") {
        mark = 54;
    } else if (levelInput == "1-") {
        mark = 51;
    } else if (levelInput == "R") {
        mark = 25;
    } else {
        mark = -1;
    }
    return mark;
}


main() {
    // This function does check and call function
    std::string levelString;
    int actualMark;

    // input
    std::cout
    << "Enter the level you want to convert to a percentage(4+, 4, etc.): ";
    std::cin >> levelString;

    // process
    std::cout << "" << std::endl;
    actualMark = mark(levelString);
    if (actualMark == 25) {
        std::cout << "The level R means the mark is below 50%." << std::endl;
    } else if (actualMark > 0) {
        std::cout << "Level " << levelString
        << " has a middle percentage of " << actualMark
        << "%." << std::endl;
    } else {
        std::cout << "Sorry, this is not a valid level." << std::endl;
    }
    std::cout << "\nDone.";
}
