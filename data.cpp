#include <string>
#include <iostream>
#include <map>
#include <any>
#include <typeinfo>

std::map<std::string, std::any> data_entree()
{
    std::map<std::string, std::any> data;
    std::cin >> data["r"];
    return data;
}

template <typename T>
bool checkType(const T& variable, const std::string& type) {
    return typeid(variable).name() == type;
}

// check cast as for other methods