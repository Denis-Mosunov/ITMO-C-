#include <iostream>
#include <vector>

template <typename Container>
void Print(const Container& container, const std::string& delimiter) {
    bool first = true;
    for (const auto& item : container) {
        if (!first) {
            std::cout << delimiter;
        }
        std::cout << item;
        first = false;
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> data = {1, 2, 3};
    Print(data, ", "); // на экране: 1, 2, 3
}
