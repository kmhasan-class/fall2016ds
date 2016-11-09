#include <iostream>
using namespace std;

int main() {
    // static declaration
    int x[] = {5, 3, 2, 1, 6};
    int n = 5;
    int a[100];

    for (int i = 0; i < n; i++)
        cout << i << ": " << x[i] << endl;

    int *px = &x[0];
    for (int i = 0; i < n; i++) {
        cout << px << ": " << *px << endl;
        px++;
    }

    int *pStart = &x[0];
    int *pEnd = &x[4];

    for (; pStart <= pEnd; pStart++) {
        cout << pStart << ": " << *pStart << endl;
    }

    int numberOfElements;
    cout << "Enter the number of elements " << endl;
    cin >> numberOfElements;

    // dynamic declaration
    // int b[numberOfElements]; // static declaration
    int *b = new int[numberOfElements];
    b[0] = 34;
    (*b)++; // changes the value at index 0
    *b++; // accessing the value at index 1
    cout << b[-1] << endl;
    cout << b[0] << endl;
    delete b;

    return 0;
}
