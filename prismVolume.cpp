// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program calculates the volume of a square-based prism


#include <iostream>
#include <cmath>


int main() {
    // this function calculates the volume of a square-based prism

    int baseLength;
    int prismHeight;
    int baseArea;
    int volume;

    std::cout << "Square-based prism volume calculation:" << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Enter base length (cm): ";
    std::cin >> baseLength;

    std::cout << "Enter prism height (cm): ";
    std::cin >> prismHeight;

    std::cout << "" << std::endl;

    // process
    baseArea = pow(baseLength, 2);

    volume = baseArea * prismHeight;

    // output
    std::cout << "Volume: " << volume << "cm³" << std::endl;
}
