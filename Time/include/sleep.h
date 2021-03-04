//
// Created by seymo on 3/4/2021.
//

#ifndef FLAKES_TIME_H
#define FLAKES_TIME_H
#include <cstdlib>
#include <windows.h>

namespace std {
    namespace timermodes {
        enum Time {
            TIMER_END,
            TIMER_BEGIN,
            TIMER_MID
        };
    }
    void sleep(int time) {
        Sleep(time * 1000);
    }
    struct clock {
        virtual bool wait_if(timermodes::Time mode, int secs) const noexcept {
            if (mode == timermodes::TIMER_BEGIN)
                return true;
            else if (mode == timermodes::TIMER_MID) {
                Sleep(secs / 2);
                return true;
            }
            else if (mode == timermodes::TIMER_END) {
                Sleep(secs * 1000);
                return true;
            }
        }
    };
}


#endif //FLAKES_TIME_H
