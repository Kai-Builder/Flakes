//
// Created by seymo on 3/8/2021.
//
#include <iostream>

#ifndef FLAKES_BETTER_STDOUT_HPP
#define FLAKES_BETTER_STDOUT_HPP
namespace std {
    void sprint(const char *T) {
        std::cout << T << std::endl;
    }

    void PUTS(const std::string &th) {
        std::cout << th << std::endl;
    }

    void puts_t(const std::string &tis) {
        std::cout << tis << std::endl;
    }
}
// HeaderDef Macros
#define PRINTS(CHAR) std::puts_t(CHAR)
#define S_PUTS(CHAR) std::PUTS(CHAR)
#define PRINT(CHAR) std::sprint(CHAR)

#endif //FLAKES_BETTER_STDOUT_HPP
