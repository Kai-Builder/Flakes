//
// Created by seymo on 3/4/2021.
//

#include "include/make.h"

int main() {
    std::makefiles::makefile s{};
    s.name = "STFile";
    s.ext = ".psl";
    std::makefiles::makefileconcat(s);

}