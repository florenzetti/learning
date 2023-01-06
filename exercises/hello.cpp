#include <iostream>

int main() {
    int x = 42;

    auto str = "x is " + std::to_string(x) + "\n";
    std::cout << str;
}
