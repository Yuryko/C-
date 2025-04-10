#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Hello, C++11!" << std::endl;
    std::cout << "Numbers: ";

    for (const auto &num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
    return 0;
}