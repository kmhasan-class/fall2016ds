#include <iostream>
using namespace std;

int linearSearch(int a[], int numberOfElements, int key) {
    int index = -1;
    for (int i = 0; i < numberOfElements; i++)
        if (a[i] == key) {
            index = i;
            break;
        }
    return index;
}

// Task 1
int countFrequency(int a[], int numberOfElements, int key) {
    // ADD CODE TO COUNT THE NUMBER OF TIMES
    // key APPEARS IN THE ARRAY a
    return 0;
}

// Task 2
// WRITE A FUNCTION TO FIND THE MIN VALUE IN AN ARRAY

// Task 3
// WRITE A FUNCTION TO FIND THE MAX VALUE IN AN ARRAY

// Task 4
// WRITE A FUNCTION TO FIND THE SUM OF ALL NUMBERS IN AN ARRAY

// Task 5
// WRITE LINEAR SEARCH THAT WORKS FOR STRINGS

// Task 6
// WRITE LINEAR SEARCH THAT WORKS FOR FLOATING POINT NUMBERS

int main() {
    int a[] = {5, 3, 5, 6, 7, 5, 9};
    int key = 5;

    int index = linearSearch(a, 7, key);

    if (index == -1)
        cout << "Couldn't find the key " << key << endl;
    else cout << "Found key " << key << " at index " << index << endl;
    return 0;
}
