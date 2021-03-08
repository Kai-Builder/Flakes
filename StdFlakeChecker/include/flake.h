//
// Created by seymo on 3/8/2021.
//

#ifndef FLAKES_FLAKE_H
#define FLAKES_FLAKE_H
// Dynamic Version Check based off of Current Version

#include <fstream>
#include <iostream>

void Check_Version() {
    std::ifstream version("package.pkg");
    std::string versions;
    version >> versions;
    if (versions != "1.0.4-2") {
        std::cout << "Invalid Version. Download Latest from Github." << std::endl;
    }
}
#endif //FLAKES_FLAKE_H
