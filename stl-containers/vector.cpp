/*
What is std::vector?
std::vector is an dynamic array. This means its size may change during the runtime
*/

#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    // Create a vector of ints called numbers
    std::vector<int> numbers;

    // Add items to the end of numbers
    numbers.push_back(3);
    numbers.push_back(2);

    // Add item at the beginnning of numbers
    numbers.insert(numbers.begin(), 1);

    // Iterate over std::vector
    for (const auto &item : numbers){
        std::cout << item << std::endl; 
    }
    
    // sorting std::vector
    std::sort(numbers.begin(), numbers.end());
    return 0;
}