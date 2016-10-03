#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // CONSTRUCTOR
    Point(double newX, double newY) {
        x = newX;
        y = newY;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    double toRadian(double angleInDegrees) {
        return angleInDegrees * M_PI / 180.0;
    }

    void rotate(double angleInDegrees) {
        double f = toRadian(angleInDegrees);
        double xp = x * cos(f) - y * sin(f);
        double yp = y * cos(f) + x * sin(f);
        x = xp;
        y = yp;
    }

    void translate(double dx, double dy) {
        // ADD YOUR CODE HERE
    }

    void scale(double sx, double sy) {
        // ADD YOUR CODE HERE
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(5, 2);
    Point p2(1, 0);

    p1.print();

    p2.print();
    p2.rotate(45.0);
    p2.print();

    // ADD CODE TO TEST TRANSLATE AND SCALE
    return 0;
}
