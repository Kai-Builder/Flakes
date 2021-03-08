//
// Created by seymo on 3/8/2021.
//

#ifndef FLAKES_PROTO_HPP
#define FLAKES_PROTO_HPP

#include <iostream>

void MAKE(const char* v) {
    std::cout << "nullptr" << std::endl;
}

namespace std {
     struct BASIC_TEMPLATE {


         std::string value;

         std::string id;
         std::string  uuid;
         std::string link;

     public:
         BASIC_TEMPLATE() {
             this->value = "null";
             this->uuid = "none";
             this->link = "none";
             this->id = "abc";
         }
        explicit BASIC_TEMPLATE(const std::string& ths) {
            value = ths;
        }
        BASIC_TEMPLATE(const std::string& ths, const std::string& uuid ,const std::string& link, const std::string& id) {
            this->value = ths;
            this->uuid = uuid;
            this->link = link;
            this->id = id;
         }
        template<typename op>
        op& operator==(const char* thi) {
            if (this->value == thi) {
                return true;
            }
            else {
                return nullptr;
            }

        }
    } ;
    template<typename T>
    BASIC_TEMPLATE& aTemplate(const T&& s) {
        return s;
    }
    BASIC_TEMPLATE temp("L");

    template<typename open>
    open&& opened() {
        return false;
    }

}

#endif //FLAKES_PROTO_HPP
