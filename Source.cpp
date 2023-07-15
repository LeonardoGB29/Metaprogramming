#include <iostream>
#include <type_traits>
#include "max.h"
#include "min.h"

int main() {
    auto minimum = min(5, 2.2f, 8, 1.9f, 10);
    std::cout << "Minimum value: " << minimum << std::endl;

    auto maximum = max(5, 2.2f, 8, 1.9f, 10);
    std::cout << "Maximum value: " << maximum << std::endl;

    return 0;
}