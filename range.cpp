#include <iostream>
#include <string>

int main()
{
    int vals[5] = {1,
                   2,
                   3,
                   4,
                   5};
    //&val is 'reference to'
    for (auto &val : vals)
    {
        std::cout << "corrent value:" << val << std::endl;
        val += 10;
    }

    for (const auto &val : vals)
    {
        std::cout << "New value:" << val << std::endl;
    }

    return 0;
}