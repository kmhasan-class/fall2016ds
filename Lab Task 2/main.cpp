#include <cmath>
#include <iostream>
using namespace std;

int factorial(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
        f = f * i;
    return f;
}

double mycos(double x) {
    int m = 10;
    double sum = 0;

    for (int i = 0; i < m; i++) {
        int n = 2 * i;
        double numerator = pow(x, n);
        double denominator = factorial(n);
        double value = numerator / denominator;
        if (i % 2 == 0)
            sum = sum + value;
        else sum = sum - value;
    }

    return sum;
}

int main() {
    double x = M_PI;
    cout << cos(x) << endl;
    cout << mycos(x) << endl;
    return 0;
}
