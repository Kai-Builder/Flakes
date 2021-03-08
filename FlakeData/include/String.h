//
// Created by seymo on 3/8/2021.
//

#ifndef FLAKES_STRING_H
#define FLAKES_STRING_H


#include <string>

class String {
    std::string value;
    explicit String(const char* s) {
        value = s;
    }
public:
    void change(const char* thi) {
        this->value = thi;
    }
};


#endif //FLAKES_STRING_H
