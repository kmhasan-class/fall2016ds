#include <iostream>
using namespace std;

class Vector {
private:
    int *array;
    int numberOfElements;

public:
// default constructor
    Vector() {
        numberOfElements = 5;
        array = new int[numberOfElements];
    }

// constructor to initialize the vector with a different size
    Vector(int initialSize) {
        // WRITE YOUR CODE HERE
    }

    void remove(int position) {
        // WRITE YOUR CODE HERE
    }

    void printAll() {
        // WRITE YOUR CODE HERE
    }

    void addValue(int position, int data) {
        // WRITE YOUR CODE HERE
    }

    void setValue(int position, int data) {
        if (position >= numberOfElements) {
            int *b = new int[position + 1];
            b[position] = data;
            for (int i = 0; i < numberOfElements; i++)
                b[i] = array[i];
            numberOfElements = position + 1;
            delete array;
            array = b;
        } else {
            array[position] = data;
        }
    }

    int get(int position) {
        return array[position];
    }
};

int main() {
    Vector v;
    return 0;
}
