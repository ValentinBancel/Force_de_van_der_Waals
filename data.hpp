#ifndef TYPE_CHECKER_HPP
#define TYPE_CHECKER_HPP
#include <string>

template <typename T>
bool checkType(const T& variable, const std::string& type);

#include "data.cpp"

#endif // TYPE_CHECKER_HPP