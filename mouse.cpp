#include <iostream>
using namespace std;

struct Point {
    int x, y;

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p = {10, 20};        // Create a Point object
    Point* ptr = &p;           // Create a pointer to the object

    // Access members using the arrow operator
    cout << "x: " << ptr->x << ", y: " << ptr->y << endl;

    // Call the display function
    ptr->display();

    return 0;
}


