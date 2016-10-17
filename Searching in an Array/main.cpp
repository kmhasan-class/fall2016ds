#include <iostream>
#include <cmath>
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
    int frequency = 0;

    for (int i = 0; i < numberOfElements; i++)
        if (a[i] == key)
            frequency++;

    return frequency;
}

// Task 2
// WRITE A FUNCTION TO FIND THE MIN VALUE IN AN ARRAY
int findMin(int a[], int numberOfElements) {
    int min = a[0];
    for (int i = 1; i < numberOfElements; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

// Task 3
// WRITE A FUNCTION TO FIND THE MAX VALUE IN AN ARRAY

// Task 4
int calculateSum(int a[], int numberOfElements) {
    int sum = 0;
    for (int i = 0; i < numberOfElements; i++)
        sum = sum + a[i];
    return sum;
}

// Task 5
int linearSearch(string a[], int numberOfElements, string key) {
    int index = -1;
    for (int i = 0; i < numberOfElements; i++)
        if (a[i] == key) {
            index = i;
            break;
        }
    return index;
}

// Task 6
int linearSearch(double a[], int numberOfElements, double key) {
    int index = -1;
    for (int i = 0; i < numberOfElements; i++) {
        double difference = fabs(a[i] - key);
        if (difference < 0.0001) {
            index = i;
            break;
        }
    }
    return index;
}

// Task 7
// Write a linear search function for an array of points

int main() {
    int a[] = {5, 3, 5, 6, 7, 5, 9};
    int key = 5;

    int index = linearSearch(a, 7, key);
    int frequency = countFrequency(a, 7, key);
    int min = findMin(a, 7);

    if (index == -1)
        cout << "Couldn't find the key " << key << endl;
    else cout << "Found key " << key << " at index " << index << endl;

    cout << key << " is present " << frequency << " times" << endl;

    cout << "min value is " << min << endl;

    string s[] = {"strawberry", "blueberry", "apple", "orange", "kiwi"};
    string stringKey = "kiwi";
    int stringIndex = linearSearch(s, 5, stringKey);
    cout << stringKey << " found at " << stringIndex << endl;

    double d[] = {3.25, 1.79, 3.3333, 4.78, 3.65};
    double doubleKey = 3.3333333333;
    int doubleIndex = linearSearch(d, 5, doubleKey);
    cout << doubleKey << " found at " << doubleIndex << endl;

    return 0;
}
