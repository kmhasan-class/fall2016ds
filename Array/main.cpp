#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // DEFAULT CONSTRUCTOR
    Point() {
        x = 0.0;
        y = 0.0;
    }

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

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
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

    double getDistance(Point p1, Point p2) {
        // ADD YOUR CODE HERE
        return 0.0;
    }

    double getDistance(Point p2) {
        double x1 = x;
        double y1 = y;
        double x2 = p2.x;
        double y2 = p2.y;
        // ADD YOUR CODE HERE
        return 0.0;
    }

    void scale(double sx, double sy) {
        x = x * sx;
        y = y * sy;
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

double calculateTriangleArea(
        double x1, double y1,
        double x2, double y2,
        double x3, double y3) {

    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

double calculateTriangleArea(
        Point p1,
        Point p2,
        Point p3) {

    // ADD YOUR CODE HERE
    return 0.0;
}

double calculateTriangleArea(double x[], double y[]) {
    // ADD YOUR CODE HERE
    return 0.0;
}

double calculatePolygonArea(Point p[], int numberOfPoints) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double value;
        if (i + 1 == n)
            value = p[n-1].getX()*p[0].getY() - p[n-1].getY()*p[0].getX();
        else value = p[i].getX()*p[i+1].getY() - p[i].getY()*p[i+1].getX();
        sum = sum + value;
    }
    return sum / 2;
}

int main() {
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
/*
    double x[] = {2.0, 1.3, 5.6};
    double y[3];
    for (int i = 0; i < 3; i++)
        cout << x[i] << endl;

    cout << "Enter the y coordinates for 3 points" << endl;
    for (int i = 0; i < 3; i++)
        cin >> y[i];

    for (int i = 0; i < 3; i++)
        cout << x[i] << ", " << y[i] << endl;
*/
    Point p[3];
    p[0].setX(5);
    p[0].setY(9);

    for (int i = 0; i < 3; i++)
        p[i].print();
    return 0;
}
