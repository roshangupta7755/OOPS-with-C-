#include <iostream> 
using namespace std; 

class Point { 
public: 
    int x, y; 

    // Constructor to initialize x and y
    Point(int x_val, int y_val) {
        x = x_val;
        y = y_val;
    }

    // Copy Constructor 
    Point(const Point &p) { 
        x = p.x; 
        y = p.y; 
    } 

    void show() { 
        cout << "(" << x << "," << y << ")\n"; 
    } 
}; 

int main() { 
    Point p2(5, 7); // Now this line works correctly
    Point p3 = p2; 
    p3.show(); 
    return 0; 
}