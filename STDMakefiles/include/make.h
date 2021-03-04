//
// Created by seymo on 3/4/2021.
//

#ifndef FLAKES_MAKE_H
#define FLAKES_MAKE_H

#include <fstream>

namespace std {
    namespace makefiles {
        struct makefile {
            std::string name;
            std::string ext;
        };
        void makefileconcat(makefile& make) {
            std::ifstream sfile(make.name + make.ext);
            std::string foo;
            std::string lineargs;
            while (sfile >> foo) {
                getline(sfile, lineargs, '\n');
                system((foo += " " + lineargs).c_str());
            }
        }
    }
}
#endif //FLAKES_MAKE_H
