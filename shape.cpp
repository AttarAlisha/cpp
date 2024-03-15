#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateCircleArea(double radius) {
    return PI * pow(radius, 2);
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Choose a shape to calculate its area:" <<endl;
    cout << "1. Rectangle" <<endl;
    cout << "2. Circle" <<endl;
    cout << "3. Triangle" <<endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << calculateRectangleArea(length, width) <<endl;
            break;
        case 2:
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << calculateCircleArea(radius) <<endl;
            break;
        case 3:
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << calculateTriangleArea(base, height) <<endl;
            break;
        default:
            cout << "Invalid choice!" <<endl;
    }
    return 0;
}
