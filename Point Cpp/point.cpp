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
        x = x + dx;
        y = y + dy;
    }

    void scale(double sx, double sy) {
        x = x * sx;
        y = y * sy;
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(5, 2);
    Point p2(1, 0);


    p2.print();
    p2.rotate(45.0);
    p2.print();

    p1.print();
    p1.translate(2, -3);
    p1.print();
    p1.scale(2, 3);
    p1.print();
    return 0;
}
