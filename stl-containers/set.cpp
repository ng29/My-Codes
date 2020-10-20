/*
std::set is container that stores unique values which can' t be modified during the runtime.
They can be removed or added. All values inside set are sorted without our ingeration.
*/

#include <set>
#include <iostream>

int main() {
    // std::set initialization
    std::set<int> set;

    // Values insertion
    set.insert(420);
    set.insert(20);
    set.insert(10);
    set.insert(21);
    set.insert(20); // Will not change anything since 20 is already in set

    // Iteration over set
    for (const auto &v: set) {
        std::cout << v << std::endl;
    }

    // Values <=20 removal
    set.erase(set.begin(), set.find(20));
}