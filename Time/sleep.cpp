//
// Created by seymo on 3/4/2021.
//

#include <iostream>
#include "include/sleep.h"

int main() {
    std::clock clock;

    if (clock.wait_if(std::timermodes::TIMER_END, 5)) {
        std::cout << "I waited 5 seconds now." << std::endl;
    }
}