#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << std::endl;
    return 0;
}