#include "include/parsers.h"


int main() {
    std::parsers::basic_parser parser{};
    std::string final = std::parsers::validator::exprconst("1 + 1");
    std::cout << final << std::endl;
}