#include <iostream>
using namespace std;

class Vector {
private:
    int numberOfElements;
    int data[100];

public:
    Vector(int a[], int n) {
        numberOfElements = n;
        for (int i = 0; i < n; i++)
            data[i] = a[i];
    }

    int dotProduct(Vector b) {
        int sum = 0;
        for (int i = 0; i < numberOfElements; i++) {
            int multiplicationValue = data[i] * b.data[i];
            sum = sum + multiplicationValue;
        }
        return sum;
    }

    Vector crossProduct(Vector b) {
        // ADD YOUR CODE HERE
    }

    double getMagnitude() {
        // ADD YOUR CODE HERE
    }

    void print() {
        cout << "(";
        for (int i = 0; i < numberOfElements; i++)
            if (i == 0)
                cout << data[i];
            else cout << ", " << data[i];
        cout << ")";
        cout << endl;
    }
};

int main() {
    int x[] = {2, 3, 5};
    int y[] = {1, 4, 3};
    Vector a(x, 3);
    Vector b(y, 3);

    a.print();
    b.print();

    int dotResult = a.dotProduct(b);
    cout << "Result of dot product " << dotResult << endl;
    return 0;
}
