/*
std::map is very similar to python's dictionary.
It is basicaly an std::vector of std::pair objects that stores key and value
*/

#include <map>
#include <string>
#include <iostream>

int main() {
    // std::map initializaiton
    std::map<std::string, int> ages;

    // values insertion
    ages.insert(std::pair<std::string, int>("John", 21));
    ages.insert(std::pair<std::string, int>("Paul", 16));

    // accessing data
    std::cout << "Paul's age: " << ages["Paul"] << std::endl;

    // Iteration over std::map
    for (const auto &v:ages) {
        std::cout << v.first << ": " << v.second << std::endl;
    }
}