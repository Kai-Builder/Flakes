//
// Created by seymo on 3/8/2021.
//

#ifndef FLAKES_BOOLEAN_HPP
#define FLAKES_BOOLEAN_HPP

struct Boolean {
private:
    bool volatiles;
public:
    explicit Boolean(bool v) {
        volatiles = v;
    }
};

#endif //FLAKES_BOOLEAN_HPP
