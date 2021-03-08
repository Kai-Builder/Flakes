//
// Created by seymo on 3/7/2021.
//

#include <iostream>
#include "include/bettermath.h"

int main() {
    int x = 10;

    if (!std::bettermath::switch_expr("40 + 2 = 30")) {
        std::cout << "40 + 2 = 30? " << std::endl;
    }
    else {
        std::cout << "Nahh too good to be true" << std::endl;
    }
}