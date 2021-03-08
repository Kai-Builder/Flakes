//
// Created by seymo on 3/8/2021.
//

#include "include/FlakeMake.h"

#define basic_template_t std::BASIC_TEMPLATE
extern "C" {
extern void ma();
extern void get_classes();
extern void get_volatile();
}
// Namespace Flakes
namespace flakes {
    /**
     * Returns Half of @code x @endcode
     * @param x
     * @return x /2
     */
    int bettermath::half_of(int x) {
        return x / 2;
    }

    /**
     * Slightly More Dynamic version of std::bettermath::half_of(int)
     * @extends float
     * @example @code half_of(1.0) // -> 0.51 @endcode
     * \endif ERROR
     * \endif
     *
     * @param c
     * @return
     */
    double bettermath::half_of(double c) {
        return c + 0.1 / 2;
    }

    /**
     * Ma() Dummy Function.
     * @code
     * // MA Try-Catch
     * try {}
     * catch(err)
     *      ma()
     * @endcode
     * @return nullptr
     */
    void *ma() {
        return nullptr;
    }
    /**
     * Math Template
     */
    basic_template_t math("math_lib");

    void change_mathname(const char *name) {
        math.value = name;
    }
}

int main() {

}