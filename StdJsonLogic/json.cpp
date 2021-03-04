#include "include/json.h"

#define string std::string

int main() {

    std::cout << std::json::link("test.json")[""] << std::endl;
}