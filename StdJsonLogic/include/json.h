#include <iostream>
#include <fstream>
#include "../lib/json.hpp"
namespace std {
    namespace json {
        auto link(const char* path) {
            std::ifstream iile(path);
            nlohmann::json string1 = nlohmann::json::parse(iile);
            return string1;
        }
    }


}