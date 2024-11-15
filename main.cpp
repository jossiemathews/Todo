#include <iostream>
#include <optional>
#include <string>
#include <vector>

// Function that returns an optional string
std::string find_name(const std::vector<std::string> &names, const std::string &query)
{
    for (const auto &name : names)
    {
        if (name == query)
        {
            return name;
        }
    }
    // Return no value
    std::string empty = "No value";
    return empty;
}

int main()
{
    std::vector<std::string> names = {"Alice", "Bob", "Charlie", "Diana"};

    std::cout << "Enter a name to search: ";
    std::string input;
    std::cin >> input;

    // Using structured bindings with std::optional
    if (auto result = find_name(names, input); result != "No value")
    {
        std::cout << "Name found: " << result << std::endl;
    }
    else
    {
        std::cout << "Name not found." << std::endl;
    }

    return 0;
}
