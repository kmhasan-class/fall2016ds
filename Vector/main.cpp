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
        numberOfElements = initialSize;
        array = new int[numberOfElements];
    }

    void remove(int position) {
        int *b = new int[--numberOfElements];
        for (int i = 0; i < position; i++)
            b[i] = array[i];
        for (int i = position; i < numberOfElements; i++)
            b[i] = array[i + 1];
        delete array;
        array = b;
    }

    void printAll() {
        for (int i = 0; i < numberOfElements; i++)
            cout << array[i] << endl;
    }

    void addValue(int position, int data) {
        int *b = new int[++numberOfElements];
        for (int i = 0; i < position; i++)
            b[i] = array[i];
        b[position] = data;
        for (int i = position + 1; i < numberOfElements; i++)
            b[i] = array[i - 1];
        delete array;
        array = b;
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
    Vector v(3);
    v.setValue(0, 5);
    v.setValue(1, 6);
    v.setValue(2, 7);
    v.setValue(3, 8);
    v.setValue(2, 10);
    v.addValue(2, 11);
    v.remove(1);
    v.printAll();
    return 0;
}
