//
// Created by seymo on 3/8/2021.
//

#ifndef FLAKES_FLAKEMAKE_H
#define FLAKES_FLAKEMAKE_H
#include <iostream>

namespace flakes {
    extern void on_ready();
    extern bool is_ready();

    // Better Math

    namespace bettermath {
        extern int half_of(int);
        extern double half_of(double);
        extern float half_of(float c);
    }
}

#endif //FLAKES_FLAKEMAKE_H
