﻿#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::vector<int> v({ 1,2,3 });
    for (const auto& value : v) {
        std::cout << value << " ";
    }
    std::cout << '\n';//1 2 3 

    std::vector<int> destination(3);
    std::reverse_copy(std::begin(v), std::end(v), std::begin(destination));
    for (const auto& value : destination) {
        std::cout << value << " ";
    }
    std::cout << '\n';//3 2 1
}
