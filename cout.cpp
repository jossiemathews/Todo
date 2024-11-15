#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names = {"Alice", "Bob", "Charlie"};
    for (const std::string& name : names) {
        std::cout << "Hello, " << name << std::endl;
    }
    return 0;
}
