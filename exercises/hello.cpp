#include <iostream>

int main() {
    int x = 43;

    auto str = "x is " + std::to_string(x) + "\n";
    std::cout << str;
}
