#include <stdio.h>
#include <math.h>

double toRadian(double angleInDegrees) {
    return angleInDegrees * M_PI / 180.0;
}

int main() {
    double x = 1.0;
    double y = 0.0;
    double f = toRadian(45.0);

    double xp = x * cos(f) - y * sin(f);
    double yp = y * cos(f) + x * sin(f);

    printf("Original point(%.6lf, %.6lf)\n", x, y);
    printf(" Rotated point(%.6lf, %.6lf)\n", xp, yp);

    return 0;
}
