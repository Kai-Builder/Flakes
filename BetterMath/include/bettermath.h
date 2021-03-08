//
// Created by seymo on 3/7/2021.
//

#ifndef FLAKES_BETTERMATH_H
#define FLAKES_BETTERMATH_H

namespace std {
    namespace bettermath {
        int half_of(int c) {
            return c / 2;
        }
        double half_of(double c) {
            return c / 2;
        }
        float half_of(float c) {
            return c / 2;
        }
        int pemdas(const std::string& expr) {
            return std::stoi(expr);
        }
        bool switch_expr(const std::string& construct) {
            bool exprf = std::stoi(construct);
            return exprf;
        }
        int five_points_up(int c) {
            return c + 5;
        }
        int ten_points_up(int c) {
            return c + 10;
        }

    }
}

#endif //FLAKES_BETTERMATH_H
