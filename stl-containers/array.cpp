/*
std::array is a wrapper around probably well-known standard c-style arrays
It has some benefits such as:
- Iterators
- Compatiblity with some algorithms such as std::swap() or std::sort()
*/

#include <iostream>
#include <array>
#include <algorithm>

int main() {
    // std::array initialization
    std::array<int, 4> nums1 = {1,2,3,4};
    std::array<int, 4> nums2 = {4,3,2,1};

    // Comparison between std::array
    if (nums1 == nums2) {
        std::cout << "Arrays are equal.";
    } else {
        std::cout << "Arrays are not equal.";
    }

    // Iterating over std::array
    for (const auto &v: nums1) {
        std::cout << v << std::endl;
    }

    // Sorting std::array
    std::sort(nums2.begin(), nums2.end()); // requires <algorithm> header
    
    return 0;
}
