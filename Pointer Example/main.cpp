#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    double z = 2.34;
    int *px = &x;
    int *py = &y;
    double *pz = &z;
    x++;

    cout << "Value of x " << x << endl;
    cout << "Value of y " << y << endl;
    cout << "Value of z " << z << endl;

    cout << "Address of x " << px << endl;
    cout << "Address of y " << py << endl;
    cout << "Address of z " << pz << endl;

    px++;
    (*px)++;
    cout << "Value of x using pointer " << *px << endl;
    cout << "Value of y using pointer " << *py << endl;
    cout << "Value of z using pointer " << *pz << endl;

    return 0;
}
