#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    cout << "Area: " << rectangle.getArea() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;

    return 0;
}
// output:==

// Enter the length of the rectangle: 5
// Enter the width of the rectangle: 3
// Area: 15
// Perimeter: 16