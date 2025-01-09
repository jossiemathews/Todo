#include <iostream>
#include <vector>
using namespace std;

int& some_function(int i)
{
    cout << i << std::endl;
    int x = 111;
    static int& v = x;
    cout<<v<<std::endl;
    int *var = &v;
    return v;
}

int main()
{

    std::vector<int> v = {1, 2, 3, 4, 5};
    string s {"Hello World"};
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << std::endl;
    int r_v = some_function(5);
    cout << r_v << std::endl;
    return 0;
}
