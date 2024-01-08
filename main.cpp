#include <iostream>
#include <string>
#include "data.hpp"

int main() {
    int intValue = 42;
    std::string stringValue = "Hello, C++!";

    // Using the template function from data.hpp
    bool isString = checkType(stringValue, typeid(std::string).name());
    bool isInt = checkType(intValue, typeid(int).name());

    std::cout << "Is a string: " << std::boolalpha << isString << std::endl;
    std::cout << "Is an int: " << std::boolalpha << isInt << std::endl;

    return 0;
}
