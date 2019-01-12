#include <string>
#include <vector>
#include <iostream>
#include <nat.hpp>
#include <limits>

constexpr unsigned long ulong_max = std::numeric_limits<unsigned long>::max();


int main(int argc, char ** argv) {
    std::vector<unsigned long> digits;
    for (int i = 1; i < argc; i++) {
        digits.push_back(std::stoul(argv[i]));
    }

    lnum::nat n{digits};
    lnum::nat m{digits};
    std::cout << n << std::endl;
    std::cout << m << std::endl;
    n += m;
    std::cout << n  << std::endl;

}