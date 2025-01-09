#include <iostream>
#include <vector>

class MyVector
{
private:
    double *elem;
    int sz;

public:
    MyVector(int s)
    {
        elem = new double[s];
        sz = s;
    }
    ~MyVector()
    {
        delete[] elem;
    }
    int size() const
    {
        return sz;
    }
    // double get(int n) const {
    //     return elem[n];
    // }
    // void set(int n, double v) {
    //     elem[n] = v;
    // }
    // overload the [] operator
    double &operator[](int n)
    {
        return elem[n];
    }
};

int main()
{
    MyVector v(5);
    for (int i = 0; i < 5; i++)
    {
        v[i] = 100 + i;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << v[i] << std::endl;
    }
    // std::cout<<v.get(4)<<std::endl;
}